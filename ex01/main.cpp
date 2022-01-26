/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:21:43 by tkirihar          #+#    #+#             */
/*   Updated: 2022/01/26 16:21:56 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	main(void)
{
	std::string command;
	PhoneBook my_phone_book;
	while (1)
	{
		std::cout << "Enter the command." << std::endl;
		std::cin >> command;
		if (command == "ADD")
			my_phone_book.add();
		else if (command == "SEARCH")
			my_phone_book.search();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "The command name is wrong." << std::endl;
	}
	std::cout << "The program has finished." << std::endl;
	return (0);
}
