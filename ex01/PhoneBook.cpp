/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:23:16 by tkirihar          #+#    #+#             */
/*   Updated: 2022/01/26 16:23:33 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

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
		std::cout << "There is no data" << std::endl;
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
			std::cout << "Enter the index(0 ~ 7)." << std::endl;
			std::cin >> index;
			if (0 <= index && index < max_size)
			{
				contactlst[index].show_person();
				break ;
			}
			std::cout << "The value is wrong." << std::endl;
			std::cout << "Enter the correct value." << std::endl;
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
