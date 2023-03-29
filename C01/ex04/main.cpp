/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:15:49 by dgross            #+#    #+#             */
/*   Updated: 2023/03/29 10:25:42 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void ReadFile (std::string filename, std::string s1, std::string s2) {
	std::fstream inputFile;
	std::fstream outFile;
	std::string	line;
	std::size_t position;

	inputFile.open( filename, std::fstream::in );
	if (inputFile.is_open())
	{
		outFile.open( filename + ".replace", std::fstream::out );
		while(getline( inputFile, line ))
		{
			while (line.find( s1 ) != std::string::npos)
			{
				position = 0;
				while ((position = line.find( s1 )) != std::string::npos)
				{
					line.erase( position, s1.length() );
					line.insert( position, s2 );
					position += s2.length();
				}
				outFile << line << std::endl;
			}
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
	ReadFile( argv[1], argv[2], argv[3] );
	return (0);
}
