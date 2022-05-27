/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:21:43 by tkirihar          #+#    #+#             */
/*   Updated: 2022/05/27 09:32:28 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "color.hpp"

int	main(void)
{
  PhoneBook my_phone_book;
  my_phone_book.repl();
  std::cout << "The program has finished" << std::endl;

  return (0);
}
