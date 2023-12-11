/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 12:46:54 by pmaimait          #+#    #+#             */
/*   Updated: 2023/12/11 16:47:04 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span(const Span& obj)
{
    *this = obj;
}
Span& Span::operator=(const Span& obj)
{
    if (this == &obj) return *this;
    size = obj.getSize();
    v = getVector();
    return (*this);
}

Span::~Span(){
    v.clear();
    std::vector<int>().swap(v);
}

Span::Span(std::size_t i)
{
    size = 0;
    v.reserve(i);
}

void    Span::addNumber(int value)
{
    if(v.capacity() <= size)
    {
        throw std::length_error("size over");
    }
    v.push_back(value);
    size++;
}
void    Span::addRange(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end)
{
    if (v.capacity() < (size + std::distance(begin, end)))
    {
        throw std::length_error("size over");
    }
    v.insert(v.end(), begin, end);
    size = size + std::distance(begin, end);
}

std::size_t Span::shortestSpan() const
{
	if (v.size() < 2)
		throw std::length_error("Not enough value for shortestSpan");
	long int min_span = INT_MAX;
	std::vector<int> tmp = v;
	std::sort(tmp.begin(), tmp.end());
	for (std::vector<int>::const_iterator it_tmp = tmp.begin(); (it_tmp + 1) != tmp.end(); ++it_tmp)
	{
		long int span = *(it_tmp + 1) - *it_tmp;
		if (span < min_span )
			min_span = span;
	}
	return (min_span);
}

std::size_t Span::longestSpan() const
{
    if (v.size() < 2)
        throw std::logic_error("vector size is not over 2");
    return  (*std::max_element(v.begin(), v.end()) - *std::min_element(v.begin(), v.end()));
}

std::size_t Span::getSize() const 
{
    return(size);
}

std::vector<int> Span::getVector() const{
    return (v);
}