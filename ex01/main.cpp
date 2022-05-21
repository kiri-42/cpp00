/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:21:43 by tkirihar          #+#    #+#             */
/*   Updated: 2022/05/22 01:29:06 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "color.hpp"

int	main(void)
{
	std::string command;
	PhoneBook my_phone_book;
	while (1)
	{
		std::cout << F_YELLOW;
		std::cout << "Enter the command(ADD SEARCH EXIT)" << std::endl;
		std::cout << F_RESET;
		std::cin >> command;
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
