/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:24:45 by tkirihar          #+#    #+#             */
/*   Updated: 2022/05/27 10:12:11 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include "color.hpp"

void	Contact::insert()
{
	std::cout << F_YELLOW << "Enter the first name" << F_RESET << std::endl;
	first_name = getline();
	std::cout << F_YELLOW << "Enter the last name" << F_RESET << std::endl;
	last_name = getline();
	std::cout << F_YELLOW << "Enter the nickname" << F_RESET << std::endl;
	nickname = getline();
	std::cout << F_YELLOW << "Enter the phone number" << F_RESET << std::endl;
	phone_number = getline();
	std::cout << F_YELLOW << "Enter the darkest secret" << F_RESET << std::endl;
	darkest_secret = getline();
	return ;
}

std::string Contact::getline()
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

void	Contact::show_list(size_t i)
{
	std::cout << "|" << std::setw(10) << std::right << i + 1;
	std::cout << "|" << std::setw(10) << std::right << omit_long_str(first_name);
	std::cout << "|" << std::setw(10) << std::right << omit_long_str(last_name);
	std::cout << "|" << std::setw(10) << std::right << omit_long_str(nickname);
	std::cout << "|" << std::endl;
	return ;
}

void	Contact::show_person()
{
	std::cout << "first name    : " << first_name << std::endl;
	std::cout << "last name     : " << last_name << std::endl;
	std::cout << "nickname      : " << nickname << std::endl;
	std::cout << "phone number  : " << phone_number << std::endl;
	std::cout << "darkest secret: " << darkest_secret << std::endl;
	return ;
}

std::string	Contact::omit_long_str(std::string str)
{
	if (str.length() > 10)
	{
		str = str.replace(9, 1, ".").substr(0, 10);
	}
	return (str);
}
