/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:24:29 by dgross            #+#    #+#             */
/*   Updated: 2023/02/14 19:09:59 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook instance;
	std::string  str;
	int i = -1;

	while (1)
	{
		std::cout << "Enter a command : ";
		std::getline(std::cin, str);
		if (!str.compare("ADD"))
			instance.AddContact(++i);
		if (!str.compare("SEARCH"))
			instance.SearchContact();
		if (!str.compare("EXIT") || std::cin.eof())
			break ;
		if (i > 6)
			i = -1;
	}
	return (0);
}