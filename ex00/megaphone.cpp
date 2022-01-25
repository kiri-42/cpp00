/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 02:22:05 by tkirihar          #+#    #+#             */
/*   Updated: 2022/01/26 02:46:43 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
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
		cout << av[i];
	}
	cout << endl;
	return 0;
}
