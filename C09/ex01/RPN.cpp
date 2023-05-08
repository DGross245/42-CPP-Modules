/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:10:24 by dna               #+#    #+#             */
/*   Updated: 2023/05/08 08:41:24 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RPN.hpp"
#include <string>
#include <algorithm>


RPN::RPN( void ) {
	return ;
}

RPN::~RPN( void ) {
	return ;
}

RPN::RPN( RPN const &obj ) {
	*this = obj;
	return ;
}

RPN &RPN::operator=( RPN const &obj ) {
	if (this == &obj )
		return (*this);
	return (*this);
}

void	RPN::calculator( std::string rpn ) {
	std::stack<int> Stack;
	int left = 0;
	int right = 0;

	for (unsigned int i = 0; i != rpn.length(); i++) {
		if (i % 2 != 0) {
			if (rpn[i] == ' ')
				continue;
			else
				throw InvalidExpressionException("Error: invalid expression");
		}
		if (isdigit(rpn[i])) {
			if (rpn[ ++i ] == ' ')
				Stack.push(rpn[i - 1] - '0');	
		}
		else if (Stack.size() >= 2) {
			right = Stack.top();
			Stack.pop();
			left = Stack.top();
			Stack.pop();
		}
		else
			throw InvalidExpressionException("Error: invalid expression!");
		if (rpn[i] == '+')
			Stack.push(left + right);
		else if (rpn[i] == '-')
			Stack.push(left - right);
		else if (rpn[i] == '/')
			Stack.push(left / right);
		else if (rpn[i] == '*')
			Stack.push(left * right);
	}
	if (Stack.size() != 1)
		throw InvalidExpressionException("Error: invalid expression!");
	std::cout << Stack.top() << std::endl;
}


RPN::InvalidExpressionException::InvalidExpressionException( std::string Error ) : _error(Error) { return ; }
RPN::InvalidExpressionException::~InvalidExpressionException( void ) throw() { return ; }
const char *RPN::InvalidExpressionException::what() const throw() { return (this->_error.c_str());}