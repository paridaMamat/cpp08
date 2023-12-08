/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:56:21 by pmaimait          #+#    #+#             */
/*   Updated: 2023/12/08 11:54:14 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.h"

int main(void)
{
	std::vector<int> v;
	std::deque<int> d;
	std::list<int> l;

	for (int i = 0; i < 30; i = i + 2)
	{
		v.push_back(i);
		d.push_back(i);
		l.push_back(i);
	}
    
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        std::cout << "v = " << *it << std::endl;
    }

    for (std::deque<int>::iterator it = d.begin(); it != d.end(); ++it)
    {
        std::cout << "d = " << *it << std::endl;
    }

    for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it)
    {
        std::cout << "l = " << *it << std::endl;
    }
	try
	{
		std::cout << "Check position of 0 in vector = " << std::distance(v.begin(), easyfind(v, 0)) << std::endl;
        std::cout << "Check position of 4 in deque = " << std::distance(d.begin(), easyfind(d, 4)) << std::endl;
        std::cout << "Check position of 18 in list = " << std::distance(l.begin(), easyfind(l, 18)) << std::endl;
        std::cout << "Check position of 3 in vector = " << std::distance(v.begin(), easyfind(v, 3)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}