/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:08:30 by dgross            #+#    #+#             */
/*   Updated: 2024/05/17 23:18:22 by dgross           ###   ########.fr       */
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