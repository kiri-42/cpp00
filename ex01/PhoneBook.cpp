/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:23:16 by tkirihar          #+#    #+#             */
/*   Updated: 2022/05/27 09:29:34 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include "color.hpp"

void	PhoneBook::repl()
{
	std::string command;
	while (1)
	{
		std::cout << F_YELLOW;
		std::cout << "Enter the command(ADD SEARCH EXIT)" << std::endl;
		std::cout << F_RESET;

		command = getline();
		if (command == "ADD")
			add();
		else if (command == "SEARCH")
			search();
		else if (command == "EXIT")
			break ;
		else
		{
			std::cout << F_RED;
			std::cout << "The command name is wrong" << std::endl;
			std::cout << F_RESET;
		}
	}
}

std::string PhoneBook::getline()
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

void	PhoneBook::add()
{
	size_t	phone_book_number;
	phone_book_number = add_count % 8;
	contactlst[phone_book_number].insert();
	add_count++;
	return ;
}

void	PhoneBook::search()
{
	if (add_count == 0)
	{
		std::cout << F_RED << "There is no data" << F_RESET << std::endl;
		return ;
	}
	size_t	max_size = 8;
	if (max_size > add_count)
	{
		max_size = add_count;
	}
	show_heading();
	for (size_t i = 0; i < max_size; i++)
	{
		contactlst[i].show_list(i);
	}
	if (add_count != 0)
	{
		size_t	index;
		while (1)
		{
			std::cout << F_YELLOW << "Enter the index(1 ~ 8)" << F_RESET << std::endl;
			std::cin >> index;
			index--;
			if (0 <= index && index < max_size)
			{
				contactlst[index].show_person();
				break ;
			}
			std::cout << F_RED;
			std::cout << "The value is wrong" << std::endl;
			std::cout << "Enter the correct value" << std::endl;
			std::cout << F_RESET;
		}
	}
	return ;
}

void	PhoneBook::show_heading()
{
	std::cout << "|" << std::setw(10) << std::right << "INDEX";
	std::cout << "|" << std::setw(10) << std::right << "FIRST NAME";
	std::cout << "|" << std::setw(10) << std::right << "LAST NAME";
	std::cout << "|" << std::setw(10) << std::right << "NICK NAME";
	std::cout << "|" << std::endl;
	return ;
}
