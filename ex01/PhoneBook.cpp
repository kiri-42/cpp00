/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:23:16 by tkirihar          #+#    #+#             */
/*   Updated: 2022/05/28 03:59:01 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <sstream>
#include "PhoneBook.hpp"
#include "color.hpp"

PhoneBook::PhoneBook()
{
  _add_count = 0;
}

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
  phone_book_number = _add_count % 8;
  _contactlst[phone_book_number].insert();
  _add_count++;
  return ;
}

void	PhoneBook::search()
{
  if (_add_count == 0)
  {
    std::cout << F_RED << "There is no data" << F_RESET << std::endl;
    return ;
  }

  print_heading();
  size_t	max_size = get_max_size();
  for (size_t i = 0; i < max_size; i++)
  {
    _contactlst[i].print_list(i);
  }

  if (_add_count != 0)
  {
    while (1)
    {
      try
      {
        std::cout << F_YELLOW << "Enter the index(1 ~ 8)" << F_RESET << std::endl;

        std::string  line = getline();
        check_valid(line);
        size_t index = std::stoi(line);
        index--;
        if (!(0 <= index && index < max_size))
          throw 1;

        _contactlst[index].print_person();
      }
      catch(const int n)
      {
        std::cout << F_RED;
        std::cout << "The value is wrong" << std::endl;
        std::cout << "Enter the correct value" << std::endl;
        std::cout << F_RESET;
      }
    }
  }
  return ;
}

void	PhoneBook::print_heading()
{
  std::cout << "|" << std::setw(10) << std::right << "INDEX";
  std::cout << "|" << std::setw(10) << std::right << "FIRST NAME";
  std::cout << "|" << std::setw(10) << std::right << "LAST NAME";
  std::cout << "|" << std::setw(10) << std::right << "NICK NAME";
  std::cout << "|" << std::endl;
  return ;
}

size_t  PhoneBook::get_max_size()
{
  size_t	max_size = 8;
  if (max_size > _add_count)
  {
    max_size = _add_count;
  }
  return max_size;
}

void  PhoneBook::check_valid(std::string str)
{
  if (str == "")
    throw 1;
  if (!isNumber(str))
    throw 1;
}

bool PhoneBook::isNumber(std::string str)
{
  size_t len = str.length();
  for (size_t i = 0; i < len; i++)
  {
    if (std::isdigit(str[i]) == 0)
      return false;
  }
  return true;
}

