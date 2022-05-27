/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:22:17 by tkirihar          #+#    #+#             */
/*   Updated: 2022/05/27 09:45:29 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
  private:
    Contact       contactlst[8];
    unsigned int  add_count;
    
    PhoneBook();
    void          show_heading();
    std::string   getline();
    void          add();
    void          search();

  public:
    void  repl();
};

#endif
