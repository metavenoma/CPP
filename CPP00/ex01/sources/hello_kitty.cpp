/*☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆*/
/*  _____ _                                                                    */
/*  \_   ( ) __ ___   /\   /\___ _ __ _   _  /\   /\___ _ __ ___  _ __   __ _  */
/*   / /\// '_ ` _ \  \ \ / / _ \ '__| | | | \ \ / / _ \ '__/ _ \| '_ \ / _` | */
/*/\/ /_  | | | | | |  \ V /  __/ |  | |_| |  \ V /  __/ | | (_) | | | | (_| / */
/*\____/  |_| |_| |_|   \_/ \___|_|   \__, |   \_/ \___|_|  \___/|_| |_|\__,_\ */
/*                                    |___/                                    */
/*                                                                             */
/*                                                        ██╗  ██╗██████╗      */
/*          hello_kitty.cpp                               ██║  ██║╚════██╗     */
/*   Created by rverona-                                  ███████║ █████╔╝     */
/*   Date: 2024-05-06                                     ╚════██║██╔═══╝      */
/*                                                             ██║███████╗     */
/*                                                             ╚═╝╚══════╝     */
/*☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆*/

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <limits>
#include <sstream>

void	my_melody_error(const std::string& prompt)
{
	std::cout << CLEAR << ORANGE << 
		" ⠀⠀⣀⣤⠶⠶⠶⠶⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
		" ⢀⡾⠋⠀⠀⠀⠀⠀⠀⠈⠙⠳⢦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
		" ⣾⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⢶⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
		" ⢻⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠻⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣤⡶⣴⣤⣄⡀⠀⠀⠀⠀\n"
		" ⠈⠻⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠛⢦⡄⠀⠀⠀⠀⣠⡶⠛⠉⠀⠀⠀⠀⠀⠈⠙⢷⣄⠀⠀\n"
		" ⠀⠀⠈⠻⢦⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢷⣄⢀⡾⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⡆⠀\n"
		" ⠀⠀⠀⠀⠀⠉⠛⠶⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡇⠀\n"
		" ⠀⠀⠀⠀⠀⠀⢀⡤⠶⠿⣿⣦⠗⠛⠒⣦⣀⠀⠀⠀⠀⠀⠐⣿⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡄⡇⠀⢠⡇⠀\n"
		" ⠀⠀⠀⠀⠀⠀⣼⠀⠀⠀⠘⠇⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⢸⣇⠄⠀⠀⠀⠀⠀⠀⠀⣠⡿⠀⠀⠐⢸⡇⠀\n"
		" ⠀⠀⠀⠀⠀⠀⠹⣤⡀⢰⠞⠉⢳⡄⠠⣾⠁⠀⠀⠀⠀⠀⠀⠀⠛⢶⣤⣀⣀⣀⣤⡴⠟⠃⠀⠀⠀⠀⣿⠁⠀\n"
		" ⠀⠀⠀⠀⠀⠀⠠⡏⠀⠈⠓⡶⠊⠀⠀⠘⡷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠁⠀⠀⠀⠀⠀⠰⣸⠇⠀⠀\n"
		" ⠀⠀⠀⠀⠀⠀⢠⣧⣀⣀⣠⡾⢦⣤⣤⡴⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣿⡀⠀⠀\n"
		" ⠀⠀⠀⠀⠀⢠⡿⠀⠈⠉⠁⠀⠀⠀⣀⣀⡀⢀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⡄⠀\n"
		" ⠀⠀⠀⠀⠀⣾⠀⠀⠀⠀⡴⠒⠒⣞⣁⡠⠽⠭⢄⣈⣳⣊⡉⠲⣄⠤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣷⠀\n"
		" ⠀⠀⠀⠀⢸⡇⠀⡴⠋⢙⡵⠚⠉⠁⠀⠀⠀⠀⠀⠀⠀⠉⠉⠓⠳⢤⣀⣳⠤⢤⡀⠀⠀⠀⠀⠀⠀⠀⠐⢺⡇\n"
		" ⠀⠀⠀⠀⢸⡇⡮⢇⡾⠁⢠⣶⣷⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠢⣄⢹⣄⡀⠀⠀⠀⠀⠀⠀⠈⡇\n"
		" ⠀⠀⠀⠀⠸⣿⡁⣼⠀⠀⣾⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣀⠀⠈⠳⣄⢹⠦⠀⠀⠀⠀⠀⠀⣟\n"
		" ⠀⠀⠀⠀⠀⠻⡟⢿⠀⠀⠈⠛⠉⠀⠀⠀⠀⣤⠤⣄⠀⠀⠀⠀⠀⣸⣿⣿⣧⠀⠀⠙⣎⠳⡄⠀⠀⠀⢸⢰⡏\n"
		" ⠀⠀⠀⠀⠀⠀⠱⣜⣆⡤⠦⠤⣄⠀⠀⠀⠀⠛⠒⠋⠀⠀⠀⠀⠀⢻⣿⣿⡏⠀⠀⠀⢸⣤⠇⠂⠀⢠⢄⡾⠁\n"
		" ⠀⠀⠀⠀⠀⠀⠀⣼⠋⠀⠀⠐⣾⠀⠀⠀⠀⠀⣤⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀⢸⠃⡃⠁⠠⣠⡾⠁⠀\n"
		" ⠀⠀⠀⠀⠀⠀⠐⡇⠀⠀⠀⠀⣼⣦⣤⣠⠦⢄⠙⠀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⢿⡞⣡⣤⠾⠋⠀⠀⠀\n"
		" ⠀⠀⠀⠀⠀⠀⠀⢷⠀⠀⠀⠸⣿⠉⠀⣹⣀⣙⣿⠏⠁⡽⠶⠤⣤⣤⣤⣤⣤⣴⡾⠅⠚⠛⠉⠀⠀⠀⠀⠀⠀\n"
		" ⠀⠀⠀⠀⠀⠀⠀⠈⠳⣤⣀⠀⠈⠛⣿⠿⣌⡝⠝⡍⣘⣧⣀⣀⣀⣀⣤⣴⣶⣾⢿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀\n"
		" ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⣳⡶⢻⠷⣮⣤⣤⣽⣥⣬⣭⣿⣿⢿⡖⠋⠉⠉⢳⡝⢧⡀⠀⠀⠀⠀⠀⠀⠀\n"
		" ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠋⠀⣠⢺⣥⣧⣽⢂⡄⠀⠓⠀⠈⢻⡄⠀⠀⠀⠀⣿⣭⣧⡄⠀⠀⠀⠀⠀⠀\n"
		" ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣋⠴⢺⠥⠚⠁⠀⠘⠦⣽⡒⢤⣄⣀⣼⢳⣤⡀⠀⠼⠃⣠⣷⡗⡄⠀⠀⠀⠀⠀\n"
		" ⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠯⠜⠉⡏⠀⠀⠀⠀⠀⡄⣧⠉⠙⠲⣾⣯⣯⣏⣳⣶⣴⣾⣻⣉⣽⣵⡦⡄⠀⠀⠀\n"
		" ⠀⠀⠀⠀⠀⠀⠀⠀⣰⠇⠀⠀⠸⠄⠀⠀⠀⠀⠀⠀⢿⠀⠀⠀⣿⢄⠀⠀⠀⠀⠀⠀⠀⠉⢉⣽⡶⠁⠀⠀⠀\n"
		" ⠀⠀⠀⠀⠀⠀⠀⠀⠟⢦⣤⣄⣀⡀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⢸⡀⠙⠒⠢⢴⣉⡦⠔⠚⠋⢸⠁⠀⠀⠀⠀\n"
		" ⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠦⠽⣉⣙⣟⠛⣛⠻⢿⠞⠿⡟⠿⣻⠛⣧⠀⠀⠀⠀⠁⠀⠀⠀⢀⡎⠀⠀⠀⠀⠀\n"
		" ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣯⣉⣉⣻⣿⣃⠙⢍⣫⣁⠉⠉⠉⣉⣩⣿⠉⠉⠉⠉⠉⠀⠀⠀⠀⠀⠀\n"
		" ⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⣤⣉⣉⣿⡀⠉⠛⠛⠧⠜⠛⠛⠛⠉⢡⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
		" ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠛⠛⠾⠶⠶⠶⠶⠞⠳⠛⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
		<< prompt << RESET << std::endl;
}

std::string get_user_input(const std::string& prompt)
{
	std::string user_input;

	user_input = "";
	while (user_input == "")
	{
		std::cout << CLEAR;
		std::cout << PINK <<
		"  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡶⠶⢦⣄⠀⠀⠀⠀⠀⣴⠟⠛⢧⣠⣶⣿⠻⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
		"  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠁⡟⠦⠌⠛⠉⠉⠉⢹⠇⢠⣶⣼⣷⣞⢙⣧⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
		"  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣤⠃⠀⠀⠀⠀⠀⠀⣿⠀⠈⢻⡃⠀⢸⡿⡄⠈⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
		"  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠁⠀⠀⠀⠀⠀⠀⠀⠘⠷⠖⠛⠛⠛⢿⡗⢋⣴⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
		"  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠛⢻⡀⢀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
		"  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡶⠾⣷⠆⠀⠀⣤⡀⠀⠀⠀⠀⠀⠀⠀⢀⣤⡀⠀⠐⢺⡟⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
		"  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⢿⡦⠀⠀⠛⠃⠀⠀⢠⢶⣄⠀⠀⠈⠛⠀⠀⠀⣺⠓⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
		"  ⣼⢧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡿⣖⡀⣀⣀⡀⠀⠈⠉⠉⠀⠀⣀⣀⣀⠀⣲⣯⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠶⡆\n"
		"  ⢻⡈⠻⣦⣀⣀⣀⣀⣀⠀⠀⠀⠁⣴⠟⠉⠁⠀⠉⠛⢦⡀⢀⡴⠛⠉⠁⠈⠙⠻⣄⠀⠁⣀⣠⣤⣤⣤⣤⡤⠖⠋⣸⠇\n"
		"  ⡿⠳⣤⣀⡀⠀⠀⠉⠉⠉⠳⢦⣼⠃⠀⠀⠀⠀⠀⠀⠀⠿⠋⠀⠀⠀⠀⠀⠀⠀⠹⣦⡞⠉⠀⠀⠀⠀⠀⢀⣠⠶⢻⡆\n"
		"  ⠻⣦⣀⠀⠀⠀⡴⠶⢦⡀⠀⠈⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⠀⡴⠚⠳⡄⠈⢉⣀⣠⡾⠁\n"
		"  ⠀⠸⣍⣉⣁⡀⣇⠀⠀⠑⠀⢠⡿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⢷⡀⠀⠓⠀⢀⡇⢤⣈⣭⠿⠁⠀\n"
		"  ⠀⠀⠀⠙⠷⠤⠿⠶⠦⠶⠞⠋⠘⢻⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⠃⠈⠻⠦⠴⠖⠻⠶⠶⠛⠁⠀⠀⠀\n"
		"  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⠻⢦⣄⠀⠀⠀⠀⠀⠀⠀⠀⣠⡴⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
		"  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠶⣄⡀⢀⣤⠶⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
		"  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\n"
		"           ╭────── · · ୨୧ · · ──────╮    \n"
		"             fields must have data!     \n"
		"           ╰────── · · ୨୧ · · ──────╯\n\n"
		<< RESET;
		std::cout << PINK << "    (˶ᵔ ᵕ ᵔ˶)  " << prompt;
		std::getline(std::cin, user_input);
		continue ;
	}
	std::cout << CLEAR;
	return (user_input);
}

int	add_new_contact(PhoneBook& phonebook)
{
	std::string first_name, last_name, nickname, phone_number, darkest_secret;
	
	first_name = get_user_input("Enter first name: ");
	last_name = get_user_input("Enter last name: ");
	nickname = get_user_input("Enter nickname: ");
	phone_number = get_user_input("Enter phone_number: ");
	darkest_secret = get_user_input("Enter darkest secret: ");

	if (first_name.empty() || last_name.empty() || nickname.empty()
			|| phone_number.empty() || darkest_secret.empty())
	{
		std::cout << "Error: All fields must be filled.\n";
		return (1);
	}
	phonebook.add_contact(Contact(first_name, last_name, nickname, phone_number, darkest_secret));
	return (0);
}

void	print_contacts(PhoneBook& phonebook)
{
	int	num_contacts = phonebook.get_contact_count();
	int	index;
	std::string	buffer;

	std::cout << "\n\n          Enter the index of the contact to display: ";
	buffer = "";
	while (buffer == "")
	{
	std::getline (std::cin, buffer);
	std::stringstream	atoi;
	atoi << buffer;
	atoi >> index;
	index--;
	}
	if (index < 0 || index >= num_contacts || buffer == "")
		my_melody_error("\n\n  (,,>﹏<,,) Invalid index! ૮ ◞ ﻌ ◟ ა\n");
	else
	{
		const Contact selected_contact = phonebook.get_contact(index);
		std::cout << CLEAR << HOT_PINK <<
			"  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
			"  ⠀⠀⠀⠀⠀⠀⠀⢠⣶⣶⣶⣦⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⠟⠛⢿⣶⡄⠀⢀⣀⣤⣤⣦⣤⡀⠀⠀⠀⠀⠀\n"
			"  ⠀⠀⠀⠀⠀⠀⢠⣿⠋⠀⠀⠈⠙⠻⢿⣶⣶⣶⣶⣶⣶⣶⣿⠟⠀⠀⠀⠀⠹⣿⡿⠟⠋⠉⠁⠈⢻⣷⠀⠀⠀⠀⠀\n"
			"  ⠀⠀⠀⠀⠀⠀⣼⡧⠀⠀⠀⠀⠀⠀⠀⠉⠁⠀⠀⠀⠀⣾⡏⠀⠀⢠⣾⢶⣶⣽⣷⣄⡀⠀⠀⠀⠈⣿⡆⠀⠀⠀⠀\n"
			"  ⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⠀⠀⢸⣧⣾⠟⠉⠉⠙⢿⣿⠿⠿⠿⣿⣇⠀⠀⠀⠀\n"
			"⠀  ⠀⠀⠀⠀⠀⢸⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⣷⣄⣀⣠⣼⣿⠀⠀⠀⠀⣸⣿⣦⡀⠀⠈⣿⡄⠀⠀⠀\n"
			"⠀⠀⠀  ⠀⠀⢠⣾⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠉⠻⣷⣤⣤⣶⣿⣧⣿⠃⠀⣰⣿⠁⠀⠀⠀\n"
			"  ⠀⠀⠀⠀⠀⣾⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠹⣿⣀⠀⠀⣀⣴⣿⣧⠀⠀⠀⠀\n"
			"⠀⠀  ⠀⠀⢸⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠻⠿⠿⠛⠉⢸⣿⠀⠀⠀⠀\n"
			"  ⢀⣠⣤⣤⣼⣿⣤⣄⠀⠀⠀⡶⠟⠻⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣶⣶⡄⠀⠀⠀⠀⢀⣀⣿⣄⣀⠀⠀\n"
			"  ⠀⠉⠉⠉⢹⣿⣩⣿⠿⠿⣶⡄⠀⠀⠀⠀⠀⠀⠀⢀⣤⠶⣤⡀⠀⠀⠀⠀⠀⠿⡿⠃⠀⠀⠀⠘⠛⠛⣿⠋⠉⠙⠃\n"
			"  ⠀⠀⠀⣤⣼⣿⣿⡇⠀⠀⠸⣿⠀⠀⠀⠀⠀⠀⠀⠘⠿⣤⡼⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣤⣼⣿⣀⠀⠀⠀\n"
			"⠀  ⠀⣾⡏⠀⠈⠙⢧⠀⠀⠀⢿⣧⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⠟⠙⠛⠓⠀\n"
			"⠀⠀  ⠹⣷⡀⠀⠀⠀⠀⠀⠀⠈⠉⠙⠻⣷⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⣶⣿⣯⡀⠀⠀⠀⠀\n"
			"⠀⠀⠀  ⠈⠻⣷⣄⠀⠀⠀⢀⣴⠿⠿⠗⠈⢻⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣾⠟⠋⠉⠛⠷⠄⠀⠀\n"
			"⠀⠀⠀⠀  ⠀⢸⡏⠀⠀⠀⢿⣇⠀⢀⣠⡄⢘⣿⣶⣶⣤⣤⣤⣤⣀⣤⣤⣤⣤⣶⣶⡿⠿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀  ⠘⣿⡄⠀⠀⠈⠛⠛⠛⠋⠁⣼⡟⠈⠻⣿⣿⣿⣿⡿⠛⠛⢿⣿⣿⣿⣡⣾⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀⠀  ⠙⢿⣦⣄⣀⣀⣀⣀⣴⣾⣿⡁⠀⠀⠀⡉⣉⠁⠀⠀⣠⣾⠟⠉⠉⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀⠀⠀⠀  ⠈⠙⠛⠛⠛⠛⠉⠀⠹⣿⣶⣤⣤⣷⣿⣧⣴⣾⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  ⠀⠀⠀⠀⠀⠀⠀⠘⠻⢦⣭⡽⣯⣡⡴⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
			<< RESET;
		std::cout << PINK << "\n\n  ♡୧‿︵‿︵‿୨♡୧‿︵‿︵‿୨♡୧‿︵‿︵‿୨♡୧‿︵‿︵‿୨♡\n";
		std::cout << "            Contact Information:\n";
		std::cout << "         First Name: " << selected_contact.get_first_name() << std::endl;
		std::cout << "         Last Name: " << selected_contact.get_last_name() << std::endl;
		std::cout << "         Nickname: " << selected_contact.get_nickname() << std::endl;
		std::cout << "         Phone Number: " << selected_contact.get_phone_number() << std::endl;
		std::cout << "         Darkest Secret: " << selected_contact.get_darkest_secret() << std::endl;
		std::cout << "    【☆ 】★ 【☆ 】★ 【☆ 】★ 【☆ 】★ 【☆ 】\n";
	
	}
}

void	search_contact(PhoneBook& phonebook)
{
	int	num_contacts = phonebook.get_contact_count();
	
	if (num_contacts == 0)
		my_melody_error("\n\n  (｡•́︿•̀｡)   No contacts available.   (╥﹏╥)\n");
	else
	{
		std::cout << CLEAR << YELLOW
			"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣴⣦⣤⣤⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣾⡿⠿⠿⢿⣿⣦⡀⢀⣀⣤⣶⣿⣿⡿⠿⣿⣷⡄⠀⠀⠀⠀⠀⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⡿⠛⠛⠛⠻⠿⣿⣿⣷⣤⣄⠀⢀⣀⣀⣤⣤⣤⣤⣤⣤⣤⣤⣿⡿⠋⠀⠀⠀⠀⠙⢿⣿⣿⡿⠟⠋⠉⠀⠀⠀⠈⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⡟⠀⠀⠀⠀⠀⠀⠀⠈⠙⠿⣿⣿⣿⠿⠿⠿⠿⠿⠛⠛⠛⢿⣿⡟⠀⠀⠀⢀⣀⣀⣀⢈⣿⣿⡄⠀⠀⠀⠀⠀⠀⠀⠘⣿⣧⠀⠀⠀⠀⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⣿⠁⠀⠀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣶⣦⡀⠀⠀⠀⠀⣀⣿⣿⣄⠀⠀⠀⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀⠀⠀⠀⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡇⠀⠀⠀⣿⣿⣧⣾⣿⡿⠋⠉⠉⠉⠻⣿⣶⣿⡿⠿⠿⠿⢿⣿⣷⡄⠀⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⡀⣠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣧⠀⠀⠀⠻⣿⣿⣿⣿⠁⠀⠀⠀⠀⠀⢿⣿⣿⣦⣄⠀⠀⠀⣿⣿⡇⠀⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣦⣤⣀⣀⣤⣿⣿⣿⣄⠀⠀⠀⠁⢀⣿⣿⡟⣿⣿⣧⠀⠀⣿⣿⡇⠀⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠛⠛⠿⠛⠛⠛⠋⠻⣿⣷⣤⣤⣶⣿⣿⣿⣿⣿⣿⠃⠀⣼⣿⡿⠁⠀⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀⠀⠀⣸⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠛⠻⣿⣯⡙⠛⠛⠁⢀⣴⣿⡿⠁⠀⠀⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀⠀⢰⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢿⣿⣶⣤⣶⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀⠀⣼⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠛⠉⠁⠀⢹⣿⡆⠀⠀⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣧⠀⠀⠀⠀⠀\n"
			"⠀⣀⣀⣤⣤⣴⣿⣿⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢴⣶⠶⢿⣿⣿⠛⠛⠛⠛⠛\n"
			"⠈⠉⠉⠉⠉⠙⢿⣿⠉⠉⠉⠁⠀⠀⠀⠀⠀⣾⣿⣿⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⡇⠀⠀⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀⠀⢸⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠺⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⣠⣤⣼⣿⣇⣀⡀⠀⠀⠀\n"
			"⠀⠀⠀⠀⣀⣠⣼⣿⣿⣶⠶⠷⠀⠀⠀⠀⠀⠈⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣶⣿⣷⣶⣤⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠁⠀⠀⠀⠀⠀⠀⠀⠉⢹⣿⣿⠟⠿⠿⠿⠆⠀\n"
			"⠀⠀⠀⠘⠛⠋⠉⠙⢿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣽⣧⣼⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⠃⠀⠀⠀⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣿⣦⣴⣾⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⣿⣿⣿⣷⣄⡀⠀⠀⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀⠀⢀⣤⣶⣿⠿⢿⣿⣦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣿⡿⠋⠙⠻⢿⣿⣦⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀⠸⠿⠛⠁⠀⠀⠀⠉⠻⢿⣿⣶⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣾⣿⠟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠻⢿⣿⣶⣶⣶⣤⣤⣀⣀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣀⣀⣤⣤⣶⣶⣾⣿⡿⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
			"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣉⠙⠛⡛⠛⠛⠿⠿⠿⠿⠿⢿⣿⣿⣿⣿⠿⠿⠿⠿⠟⠛⠛⠛⠋⡉⢀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\n"
			<< RESET;
		std::cout << GREEN << "          ╭──────────.★..──────────.★..──────────.★..─╮\n";
		std::cout << "          |     index|first name| last name|  nickname|" << std::endl;
		std::cout << "          ₊ · ♡ · · ♡ · · ♡ · · ♡ · · ♡ · · ♡ · · ♡ · ₊\n";
		for (int i = 0; i < num_contacts; i++)
		{
			std::cout << "          |";
			const Contact& contact = phonebook.get_contact(i);
			std::cout << std::setfill(' ') << std::setw(10)
				<< i + 1 << "|";
			phonebook.print_value(contact.get_first_name());
			phonebook.print_value(contact.get_last_name());
			phonebook.print_value(contact.get_nickname());
			std::cout << std::endl;
			if (i != num_contacts - 1)
				std::cout << "          ₊ · ♡ · · ♡ · · ♡ · · ♡ · · ♡ · · ♡ · · ♡ · ₊\n";
		}
		std::cout << "          ╰─..★.──────────..★.───────────..★.─────────╯" << std::endl;
		print_contacts(phonebook);
	}
}

int	main(void)
{
	PhoneBook phonebook;
	std::cout << CLEAR;

	std::cout << PINK <<
	"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣤⣶⢶⣶⣄⠀⣠⣴⣾⠿⠿⣷⣄⠀⠀⠀⠀⠀⠀⠀\n"
	"⠀⠀⠀⠀⠀⢀⣠⣤⣤⣄⣀⡀⠀⠀⠀⠀⢀⣀⣀⣀⣠⣾⠋⠀⠀⠈⠹⣿⡟⠉⠀⠀⠀⠘⣿⡄⠀⠀⠀⠀⠀⠀\n"
	"⠀⠀⠀⠀⢀⣾⠟⠉⠉⠉⠛⠻⢿⣶⠿⠿⠟⠛⠛⠛⣿⠇⠀⢠⣶⣶⣶⣿⣷⣦⣤⣀⣠⣤⣿⣷⣄⠀⠀⠀⠀⠀\n"
	"⠀⠀⠀⠀⢸⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⠀⠀⢸⣿⣼⡿⠁⠀⠀⠙⣿⣯⡁⠀⠈⢿⡇⠀⠀⠀⠀\n"
	"⠀⠀⠀⠀⢹⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣄⠀⠀⢙⣿⣷⡀⠀⠀⢠⣿⣿⣿⡆⠀⣾⡇⠀⠀⠀⠀\n"
	"⠀⠀⠀⠀⠈⢿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠛⠛⠛⠋⠙⠻⠷⠾⣿⡟⠛⠋⠀⣴⡟⠀⠀⠀⠀⠀\n"
	"⠀⠀⠀⠀⢀⣾⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⠷⡶⠿⠛⣿⡄⠀⠀⠀⠀\n"
	"⠀⠀⠀⠀⣸⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣹⣷⣤⣤⣤⡄\n"
	"⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣄⡀⠀⠀⠀⠘⠋⢹⣿⠀⠀⠀⠀\n"
	"⠀⣀⣀⣤⣿⣧⣤⡄⠀⠀⠀⢀⣤⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⡷⠀⠀⠀⠀⢠⣼⣿⣤⣤⡤⠀\n"
	"⠈⠛⠉⠉⠹⣿⠀⠀⠀⠀⠀⠸⣿⡿⠀⠀⠀⠀⠀⢀⣠⡤⣤⡀⠀⠀⠀⠀⠈⠉⠀⠀⠀⠀⠀⢀⣾⠏⠀⠀⠀⠀\n"
	"⠀⠀⠀⣀⣤⣿⣷⠞⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠷⠤⠼⣃⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢛⣿⡿⢶⣤⣄⠀⠀\n"
	"⠀⠀⠀⠉⠁⠀⠹⣷⣤⡴⠆⠀⠀⠀⠀⠀⢀⣤⣤⣤⣤⣤⣼⡟⣻⡇⠀⠀⠀⠀⠀⠀⣀⣴⡿⠋⠀⠀⠀⠉⠀⠀\n"
	"⠀⠀⠀⠀⢀⣠⡾⠟⠛⠿⣶⣤⣤⣤⣄⣰⣿⣍⣀⡀⠀⠈⠙⠳⠿⢷⣦⣀⣠⣤⣶⣿⣟⠉⠀⠀⠀⠀⠀⠀⠀⠀\n"
	"⠀⠀⠀⠀⠘⠋⠀⠀⠀⣰⡟⠉⠀⠀⠙⣿⣅⣉⣿⣁⣀⣠⣶⡀⠀⠀⠈⣿⡏⠁⠀⠀⠹⣷⠀⠀⠀⠀⠀⠀⠀⠀\n"
	"⠀⠀⠀⠀⠀⠀⠀⠀⠠⣿⠀⠀⠀⠀⠀⣿⣧⡽⠉⠛⢉⣉⣘⣷⣄⣰⣿⣿⠇⠀⠀⠀⠀⣿⡆⠀⠀⠀⠀⠀⠀⠀\n"
	"⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⡄⠀⠀⠀⠀⣻⡷⡄⣞⣳⠘⢦⣇⡈⠙⡿⢿⡇⠀⠀⠀⠀⢠⣿⡀⠀⠀⠀⠀⠀⠀⠀\n"
	"⠀⠀⠀⠀⠀⠀⠀⣴⡟⠉⢿⣦⣄⣠⣴⡿⠛⣡⣌⣿⢳⡞⠧⣿⣀⡙⠚⢿⣦⣄⣤⣴⠟⠙⢿⡄⠀⠀⠀⠀⠀⠀\n"
	"⠀⠀⠀⠀⠀⠀⢰⡿⠀⠀⠀⠈⠉⠉⢹⣧⠈⠳⠞⡉⢻⡷⢦⠸⢭⣧⣤⡿⠋⠉⠉⠀⠀⠀⠈⣿⠀⠀⠀⠀⠀⠀\n"
	"⠀⠀⠀⠀⠀⠀⢸⣇⠀⠀⠀⠀⠀⠀⠈⣿⣆⠀⢾⣹⠆⠙⢫⣶⣾⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀\n"
	"⠀⠀⠀⠀⠀⠀⠘⣿⡀⠀⠀⠀⠀⠀⠀⠘⢿⣶⣤⣤⣴⣾⡿⠻⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⢰⡿⠀⠀⠀⠀⠀⠀\n"
	"⠀⠀⠀⠀⠀⠀⠀⠹⣷⣄⠀⠀⠀⠀⠀⢀⣼⣿⣿⡿⠿⠿⣷⣶⣿⣷⡀⠀⠀⠀⠀⠀⢀⣴⡿⠁⠀⠀⠀⠀⠀⠀\n"
	"⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⢷⣦⣤⣤⣴⡿⠋⠁⠀⠀⠀⠀⠀⠀⠈⠙⢿⣦⣤⣀⣤⣴⡿⠛⠀⠀⠀⠀⠀⠀⠀⠀\n"
	"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\n"
	"    ✩₊˚.⋆☾⋆⁺₊✧ ℍ𝔼𝕃𝕃𝕆, 𝕂𝕀𝕋𝕋𝕐 ✩₊˚.⋆☾⋆⁺₊✧     \n\n"
	<< RESET;
	while (true)
	{
		std::string	command;
		std::cout <<  BLUE << "\n\n  ✮⋆˙ Enter one of the following commands:" << RESET << std::endl;
		std::cout  << BLUE << "\tADD   •ﻌ•   SEARCH   •ﻌ•   EXIT\n\n" << RESET << std::endl;
		std::cout << BLUE << "     >ᴗ<    ";
		std::cin >> command;
		if (command == "ADD")
		{
			if (add_new_contact(phonebook))
				continue ;
		}
		else if (command == "SEARCH")
			search_contact(phonebook);
		else if (command == "EXIT")
			break ;
		else
			my_melody_error("\n\n ૮₍˶Ó﹏Ò ⑅₎ა   invalid command    ( ｡ •̀ ᴖ •́ ｡)\n");
	}
	return (0);
}
