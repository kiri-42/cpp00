/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:21:43 by tkirihar          #+#    #+#             */
/*   Updated: 2022/05/27 00:49:24 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "PhoneBook.hpp"
#include "color.hpp"

std::string getline()
{
	std::string input;
	std::getline(std::cin, input);
	try
	{
		if (std::cin.eof() || std::cin.fail() || std::cin.bad())
			throw "Input failed";
	}
	catch(const char *str)
	{
		std::cerr << F_RED;
		std::cerr << str << std::endl;
		std::cerr << F_RESET;

		std::exit(1);
	}

	return input;
}

int	main(void)
{
	std::string command;
	PhoneBook my_phone_book;
	while (1)
	{
		std::cout << F_YELLOW;
		std::cout << "Enter the command(ADD SEARCH EXIT)" << std::endl;
		std::cout << F_RESET;

		command = getline();
		if (command == "ADD")
			my_phone_book.add();
		else if (command == "SEARCH")
			my_phone_book.search();
		else if (command == "EXIT")
			break ;
		else
		{
			std::cout << F_RED;
			std::cout << "The command name is wrong" << std::endl;
			std::cout << F_RESET;
		}
	}
	std::cout << "The program has finished" << std::endl;
	return (0);
}
