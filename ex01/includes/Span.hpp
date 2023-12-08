/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 12:09:24 by pmaimait          #+#    #+#             */
/*   Updated: 2023/12/08 12:46:36 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

class Span 
{
    private : 
        std::size_t size;
        std::vector<int> v;
        Span();
    public :
        Span(const Span& obj);
        Span& operator=(const Span& obj);
        ~Span();
        
        Span(std::size_t i);
        void addNumber(int value);
        void addRange(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);
        std::size_t shortestSpan() const;
        std::size_t longestSpan() const;
        std::size_t getSize() const;
        std::vector<int> getVector() const;   
};

#endif