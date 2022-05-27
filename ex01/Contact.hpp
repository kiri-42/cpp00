/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:22:40 by tkirihar          #+#    #+#             */
/*   Updated: 2022/05/28 03:53:30 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_phone_number;
		std::string		_darkest_secret;

		std::string		omit_long_str(std::string str);

	public:
		void				insert();
		std::string	getline();
		void				print_list(size_t i);
		void				print_person();
};

#endif
