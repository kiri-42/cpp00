/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:22:17 by tkirihar          #+#    #+#             */
/*   Updated: 2022/05/28 03:56:21 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
  private:
    Contact       _contactlst[8];
    unsigned int  _add_count;

    PhoneBook();
    bool          isNumber(std::string str);
    void          print_heading();
    std::string   getline();
    size_t        get_max_size();
    void          add();
    void          search();
    void          check_valid(std::string str);

  public:
    void  repl();
};

#endif
