/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:15:49 by dgross            #+#    #+#             */
/*   Updated: 2023/02/22 09:25:43 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void replace (char *filename, char *s1, char *s2) {
	std::fstream inputFile(filename);
	std::string	line;

	if (inputFile.is_open())
	{
		while(getline( inputFile, line))
		{
			
		}
		inputFile.close();
	}
	else
		std::cout << "file doesnt exist" << std::endl;
	return ;
}

int main( int argc, char **argv )
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arg" << std::endl;
		return (1);
	}
	replace(argv[1], argv[2], argv[3]);
	return (0);
}
