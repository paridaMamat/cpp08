/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:56:12 by pmaimait          #+#    #+#             */
/*   Updated: 2023/12/08 11:04:31 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>

template < typename T >
typename T::iterator	easyfind(T& container, const int value)
{
	typename T::iterator iter;
	
	iter = std::find(container.begin(), container.end(), value);
	if (iter == container.end())
		throw std::runtime_error("Value not found in container");
	return iter;
}

#endif
