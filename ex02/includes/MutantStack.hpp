/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 10:30:12 by pmaimait          #+#    #+#             */
/*   Updated: 2023/12/11 14:15:15 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include<iostream>
#include<stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public :
        MutantStack(){};
        MutantStack(const MutantStack &obj){*this = obj;}
        MutantStack& operator=(const MutantStack &obj) {*this = obj; return (*this);}
        ~MutantStack(){};
        
        typedef typename MutantStack<T>::stack::container_type::iterator iterator;
        iterator begin() {return this->c.begin();}
        iterator end() {return this->c.end();}

        typedef typename MutantStack<T>::stack::container_type::reverse_iterator reverse_iterator;
        reverse_iterator rbegin() {return this->c.rbegin();}
        reverse_iterator rend() {return this->c.rend();}
        
        typedef typename MutantStack<T>::stack::container_type::const_iterator const_iterator;
        const_iterator cbegin(void) {return this->c.cbegin();}
        const_iterator cend(void) {return this->c.cend();}

        typedef typename MutantStack<T>::stack::container_type::const_reverse_iterator const_reverse_iterator;
        const_iterator crbegin(void) {return this->c.crbegin();}
        const_iterator crend(void) {return this->c.crend();}

        
};

#endif