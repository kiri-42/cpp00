/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 02:22:05 by tkirihar          #+#    #+#             */
/*   Updated: 2022/01/26 03:00:09 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < ac; i++)
	{
		size_t	j = 0;
		while (av[i][j] != '\0')
		{
			av[i][j] = toupper(av[i][j]);
			j++;
		}
		std::cout << av[i];
	}
	std::cout << std::endl;
	return 0;
}
