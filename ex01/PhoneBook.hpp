/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:22:17 by tkirihar          #+#    #+#             */
/*   Updated: 2022/05/28 04:00:46 by tkirihar         ###   ########.fr       */
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
    std::string   getline();
    void          add();
    void          search();
    void          print_heading();
    size_t        get_max_size();
    void          check_valid(std::string str);
    bool          isNumber(std::string str);

  public:
    void  repl();
};

#endif
