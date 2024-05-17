/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:10:33 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:21:28 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <string>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include <climits>

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
		Number = static_cast<int>(strtod(Numbers[i], NULL));
		List.push_back( Number );
		Vector.push_back( Number );
	}

	Start = clock();
	res_lis = SortList( List );
	End = clock();
    double time = static_cast<double>(End - Start) / CLOCKS_PER_SEC * 1000;
	std::cout << "After: ";
	for (std::list<int>::iterator it = res_lis.begin(); it != res_lis.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "Time to process range of " << List.size() << " elements with std::list : "  << time << " ms" << std::endl;
	
	Start = clock();
	res_vec = SortVector( Vector );
	End = clock();
	
    time = static_cast<double>(End - Start) / CLOCKS_PER_SEC * 1000;
	std::cout << "Time to process range of " << Vector.size() << " elements with std::vector : " << time << " ms" << std::endl;
	return ;

}

std::list<int> PmergeMe::InsertsortList( std::list<int> &List ) {
	std::list<int> sorted;
	std::list<int>::iterator it;
	std::list<int>::iterator it2;

	for (it = List.begin(); it != List.end(); it++) {
		it2 = sorted.begin();
		while (it2 != sorted.end() && *it > *it2) {
			it2++;
		}
		sorted.insert(it2, *it);	
	}	
	return (sorted);
}

std::vector<int> PmergeMe::InsertsortVector( std::vector<int> &Vector ) {
	std::vector<int> sorted;
	std::vector<int>::iterator it;
	std::vector<int>::iterator it2;

	for (it = Vector.begin(); it != Vector.end(); it++) {
		it2 = sorted.begin();
		while (it2 != sorted.end() && *it > *it2) {
			it2++;
		}
		sorted.insert(it2, *it);	
	}	
	return (sorted);
}

std::list<int> PmergeMe::SortList( std::list<int> &List ) {
	if (List.size() <= 4)
		return (InsertsortList(List));
	
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
	if (Vector.size() <= 4)
		return (InsertsortVector(Vector));
	
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
	double Number = 0;

	for (unsigned long i = 0; i < Numbers.length(); i++) {
		if (isdigit(Numbers[i]))
			continue;
		else
			throw InvalidInputException( "Error: Input");
	}
	Number = strtod(Numbers.c_str(), NULL);
	if (Number > INT_MAX || Number < INT_MIN)
		throw InvalidInputException( "Error: Input: Number is too big!");
	return (0);
}

PmergeMe::InvalidInputException::InvalidInputException( std::string Error ) : _error(Error) { return ; }
PmergeMe::InvalidInputException::~InvalidInputException( void ) throw() { return ; }
const char *PmergeMe::InvalidInputException::what() const throw() { return (this->_error.c_str());}