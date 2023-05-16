/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:10:35 by dna               #+#    #+#             */
/*   Updated: 2023/05/10 11:35:54 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

# include <vector>
# include <cstdint>
# include <ctime>
# include <list>
# include <string>

class PmergeMe {

public:
	
	static void				Sort( int size, char **Numbers );
	static int				checkinput( std::string Numbers );
	static std::vector<int>	SortVector( std::vector<int> &Vector );
	static std::list<int>	SortList( std::list<int> &List );
	
	class InvalidInputException : public std::exception {

	public:

		InvalidInputException( std::string Error );
		~InvalidInputException( void ) throw();
		virtual const char* what() const throw();
	
	private:

		std::string _error;
	};
	
private:

	PmergeMe( void );
	PmergeMe( PmergeMe const &obj );
	~PmergeMe( void );
	PmergeMe &operator=( PmergeMe const &obj );

};

#endif