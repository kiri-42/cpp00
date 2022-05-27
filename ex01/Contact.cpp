/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:24:45 by tkirihar          #+#    #+#             */
/*   Updated: 2022/05/27 10:05:22 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include "color.hpp"

void	Contact::insert()
{
	std::cout << F_YELLOW << "Enter the first name" << F_RESET << std::endl;
	std::cin >> first_name;
	std::cout << F_YELLOW << "Enter the last name" << F_RESET << std::endl;
	std::cin >> last_name;
	std::cout << F_YELLOW << "Enter the nickname" << F_RESET << std::endl;
	std::cin >> nickname;
	std::cout << F_YELLOW << "Enter the phone number" << F_RESET << std::endl;
	std::cin >> phone_number;
	std::cout << F_YELLOW << "Enter the darkest secret" << F_RESET << std::endl;
	std::cin >> darkest_secret;
	return ;
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
