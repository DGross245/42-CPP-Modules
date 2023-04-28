/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:55:17 by dgross            #+#    #+#             */
/*   Updated: 2023/04/28 14:23:19 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main( void )
{
    {
        std::cout << "###Char Test !###" << std::endl;
    
        char array[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
    
        ::Iter(array, 10, print);
    }
	{
		std::cout << "###Int Test !###" << std::endl;
    
        int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
        ::Iter(array, 10, print);
	}
	{
		std::cout << "###Float Test !###" << std::endl;
    
        float array[] = { 1.1f, 2.1f, 3.1f, 4.0f, 5.9f, 6.0f, 7.0f, 8.10f, 9.0f, 10.0f };
    
        ::Iter(array, 10, print);
	}
	{
		std::cout << "###Double Test !###" << std::endl;
    
        double array[] = { 1.1, 2.2, 3.4, 4.5, 5.9, 6.10, 7.22, 8.3213, 9.1, 10 };
    
        ::Iter(array, 10, print);
	}
    return 0;
}