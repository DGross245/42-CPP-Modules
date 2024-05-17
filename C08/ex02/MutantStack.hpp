/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:10:11 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:20:22 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <algorithm>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T> {

public:

	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack( void ) : std::stack<T>() {
		return ;
	}
	MutantStack( MutantStack const &obj ) : std::stack<T>(obj) {
		return ;
	}
	~MutantStack( void ) {
		return ;
	}
	MutantStack &operator=( MutantStack const &instance ) {
		*this = instance;
		return (*this);
	}

	iterator begin( void ) {
		return (std::stack<T>::c.begin());
	}

	iterator end( void ) {
		return (std::stack<T>::c.end());	
	}
	
private:

};

#endif