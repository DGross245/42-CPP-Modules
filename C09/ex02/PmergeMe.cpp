/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:10:33 by dna               #+#    #+#             */
/*   Updated: 2023/05/17 16:04:05 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <string>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <iomanip>

PmergeMe::PmergeMe( void ) {
	return ;
}

PmergeMe::~PmergeMe( void ) {
	return ;
}

PmergeMe::PmergeMe( PmergeMe const &obj ) {
	*this = obj;
	return ;
}

PmergeMe &PmergeMe::operator=( PmergeMe const &obj ) {
	if (this == &obj )
		return (*this);
	return (*this);
}

void PmergeMe::Sort( int size, char **Numbers ) {
	std::list<int> List, res_lis;
	std::vector<int> Vector, res_vec;
	std::clock_t Start,End;
	int Number;
	
	for (int i = 1; i < size; i++)
		checkinput( Numbers[i] );
	std::cout << "Before: ";
	for (int i = 1; i < size; i++)
		std::cout << Numbers[i] << " ";
	std::cout << std::endl;
	for (int i = 1; i < size; i++) {
		Number = strtod(Numbers[i], NULL);
		List.push_back( Number );
		Vector.push_back( Number );
	}

	Start = clock();
	res_lis = SortList( List );
	End = clock();
    double time = static_cast<double>(End - Start) / CLOCKS_PER_SEC * 100000;
	std::cout << "After: ";
	for (std::list<int>::iterator it = res_lis.begin(); it != res_lis.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "Time to process range of " << List.size() << " elements with std::list : "  << time << " us" << std::endl;
	
	Start = clock();
	res_vec = SortVector( Vector );
	End = clock();
	
    time = static_cast<double>(End - Start) / CLOCKS_PER_SEC * 100000;
	std::cout << "Time to process range of " << Vector.size() << " elements with std::vector : " << time << " us" << std::endl;
	return ;

}

std::list<int> PmergeMe::SortList( std::list<int> &List ) {
	if (List.size() == 1)
		return (List);
	
	std::list<int>::iterator it1 = List.begin();
	std::advance(it1, List.size() / 2);
	std::list<int> left(List.begin(), it1);
	std::list<int> right(it1, List.end());
	left = SortList(left);
	right = SortList(right);
	
	std::list<int>::iterator itA = left.begin();
	std::list<int>::iterator itB = right.begin();
	std::list<int> result;

	while (itA != left.end() && itB != right.end())
	{
		if (*itA < *itB)
		{
			result.push_back(*itA);
			itA++;
		}
		else
		{
			result.push_back(*itB);
			itB++;
		}
	}

	result.insert(result.end(), itA, left.end());
	result.insert(result.end(), itB, right.end());
	return (result);
}

std::vector<int> PmergeMe::SortVector( std::vector<int> &Vector ) {
	if (Vector.size() == 1)
		return (Vector);
	
	std::vector<int>::iterator it1 = Vector.begin() + (Vector.size() / 2);
	std::vector<int> left(Vector.begin(), it1);
	std::vector<int> right(it1, Vector.end());
	left = SortVector(left);
	right = SortVector(right);
	
	std::vector<int>::iterator itA = left.begin();
	std::vector<int>::iterator itB = right.begin();
	std::vector<int> result;

	while (itA != left.end() && itB != right.end())
	{
		if (*itA < *itB)
		{
			result.push_back(*itA);
			itA++;
		}
		else
		{
			result.push_back(*itB);
			itB++;
		}
	}

	result.insert(result.end(), itA, left.end());
	result.insert(result.end(), itB, right.end());
	return (result);
}

int PmergeMe::checkinput( std::string Numbers ) {
	for (unsigned long i = 0; i < Numbers.length(); i++) {
		if (isdigit(Numbers[i]))
			continue;
		else
			throw InvalidInputException( "Error: Input");
	}
	return (0);
}

PmergeMe::InvalidInputException::InvalidInputException( std::string Error ) : _error(Error) { return ; }
PmergeMe::InvalidInputException::~InvalidInputException( void ) throw() { return ; }
const char *PmergeMe::InvalidInputException::what() const throw() { return (this->_error.c_str());}