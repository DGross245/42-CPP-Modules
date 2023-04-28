/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dna <dna@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:08:30 by dgross            #+#    #+#             */
/*   Updated: 2023/04/28 12:14:11 by dna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <time.h>
#include <cstdlib>
#include <iostream>

int main()
{
    Base*   base = generate();
	identify(base);
	identify(*base);

    delete base;
}