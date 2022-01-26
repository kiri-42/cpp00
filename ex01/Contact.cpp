/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:24:45 by tkirihar          #+#    #+#             */
/*   Updated: 2022/01/26 17:04:38 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include "color.hpp"

void	Contact::insert()
{
	std::cout << "Enter the first name" << std::endl;
	std::cin >> first_name;
	std::cout << "Enter the last name" << std::endl;
	std::cin >> last_name;
	std::cout << "Enter the nickname" << std::endl;
	std::cin >> nickname;
	std::cout << "Enter the phone number" << std::endl;
	std::cin >> phone_number;
	std::cout << "Enter the darkest secret" << std::endl;
	std::cin >> darkest_secret;
	return ;
}

void	Contact::show_list(size_t i)
{
	std::cout << "|" << std::setw(10) << std::right << i;
	std::cout << "|" << std::setw(10) << std::right << strlen_check(first_name);
	std::cout << "|" << std::setw(10) << std::right << strlen_check(last_name);
	std::cout << "|" << std::setw(10) << std::right << strlen_check(nickname);
	std::cout << "|" << std::endl;
	return ;
}

void	Contact::show_person()
{
	std::cout << "first name    :" << first_name << std::endl;
	std::cout << "last name     :" << last_name << std::endl;
	std::cout << "nickname      :" << nickname << std::endl;
	std::cout << "phone number  :" << phone_number << std::endl;
	std::cout << "darkest secret:" << darkest_secret << std::endl;
	return ;
}

std::string	Contact::strlen_check(std::string str)
{
	if (str.length() >= 10)
	{
		str = str.replace(9, 1, ".").substr(0, 10);
	}
	return (str);
}
