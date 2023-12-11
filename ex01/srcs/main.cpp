/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 12:46:58 by pmaimait          #+#    #+#             */
/*   Updated: 2023/12/11 16:48:30 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/Span.hpp"

int main()
{
    Span sp = Span(5);
	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "########################################" << std::endl;

	std::vector<int> tmp;

	for (int i = 0; i < 100000; i++) 
	{
		tmp.push_back(i * 2);
	}
	
	Span test2 = Span(100002);
	try
	{
		test2.addRange(tmp.begin(), tmp.end());
		std::cout << test2.shortestSpan() << std::endl;
		std::cout << test2.longestSpan() << std::endl;
		
		test2.addNumber(9);
		test2.addNumber(200000);
		std::cout << test2.shortestSpan() << std::endl;
		std::cout << test2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}