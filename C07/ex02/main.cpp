/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:54:36 by dgross            #+#    #+#             */
/*   Updated: 2023/04/28 15:20:17 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <cstdlib>
#include <ctime>

#define MAX_VAL 100

int main( void )
{
    {
        int i = 0;
        std::cout << "Empty Test!" << std::endl;
        Array<int> test;
        for (std::size_t i = 0; i < test.size(); i++ ) {
            std::cout << test[i] << std::endl;
        }
        Array<int> empty(MAX_VAL);
        int *emptymirror = new int();
        std::cout << empty[i] << std::endl;
        std::cout << emptymirror[i] << std::endl;
        std::cout << "Test Done\n" << std::endl;
        delete[] emptymirror;
    }
    {
        std::cout << "TESTING\n" << std::endl;
    
        Array<int> numbers(MAX_VAL);
        int *mirror = new int[MAX_VAL];
    
        srand(time(NULL));
        for (std::size_t i = 0; i < numbers.size(); i++) {
            const int value = rand();
            numbers[i] = value;
            mirror[i] = value;
        }
        std::cout << "Testing if there are equal" << std::endl;
        for(std::size_t i = 0; i < numbers.size(); i++)
            if (numbers[i] != mirror[i])
                std::cerr << "They are not equal" << std::endl;
        std::cout << "test concluded!\n" << std::endl;
        delete[] mirror;
    }
    {
        std::cout << "Copy and Assignment Operator Test\n" << std::endl;
    
        Array<int> Original(MAX_VAL);
        srand(time(NULL));
        for (std::size_t i = 0; i < Original.size(); i++) {
            const int value = rand();
            Original[i] = value;
        }
        Array<int> copy(Original);
        Array<int> assign = Original;
    
        std::cout << "Testing if there are equal\n" << std::endl;

        for (std::size_t i = 0; i < Original.size(); i++) {
            if (Original[i] != copy[i]) {
                std::cout << "Copy is not equal to Orignal" << std::endl;
                break ;
            }
            else if (Original[i] != assign[i]) {
                std::cout << "Assign is not equal to Orignal" << std::endl;
                break ;
            }
        }
        
        std::cout << "Test finished!\n" << std::endl;
    }
    {
        std::cout << "Out of range test !\n" << std::endl;
        Array<int> integer(MAX_VAL);
    
        try
        {
            std::cout << "Test#1" << std::endl;
            integer[1] = 1;
            std::cout << "Test#1 worked!" << std::endl;
            std::cout << "Test#2" << std::endl;
            integer[MAX_VAL - 1] = 1;
            std::cout << "Test#2 worked!" << std::endl;
            std::cout << "Test#3" << std::endl;
            integer[-2] = 0;
            std::cout << "Test#3 worked!" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            std::cout << "Test#4" << std::endl;
            integer[MAX_VAL] = 0;
            std::cout << "Test#4 worked!" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        } 
    }
}
