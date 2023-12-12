/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 10:30:07 by pmaimait          #+#    #+#             */
/*   Updated: 2023/12/12 10:05:17 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"
#include <list>
#include <vector>

int main()
{
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }

    std::cout << "-----------list-------------------\n";

    {
        std::list<int> list;
        list.push_back(5);
        list.push_back(17);
        std::cout << list.back() << std::endl;
        list.pop_back();
        std::cout << list.size() << std::endl;
        list.push_back(3);
        list.push_back(5);
        list.push_back(737);
        list.push_back(0);
        std::list<int>::iterator it = list.begin();
        std::list<int>::iterator ite = list.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::list<int> s(list);
    }
    
    std::cout << "-----------vector-------------------\n";

    {
        std::vector<int> vector;
        vector.push_back(5);
        vector.push_back(17);
        std::cout << vector.back() << std::endl;
        vector.pop_back();
        std::cout << vector.size() << std::endl;
        vector.push_back(3);
        vector.push_back(5);
        vector.push_back(737);
        vector.push_back(0);
        std::vector<int>::iterator it = vector.begin();
        std::vector<int>::iterator ite = vector.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::vector<int> s(vector);
    }

     std::cout << "-----------test with vector-------------------\n";

    {
        std::vector<int> vector;
        vector.push_back(5);
        vector.push_back(17);
        std::cout << vector.back() << std::endl;
        vector.pop_back();
        std::cout << vector.size() << std::endl;
        vector.push_back(3);
        vector.push_back(5);
        vector.push_back(737);
        vector.push_back(0);
        std::vector<int>::iterator it = vector.begin();
        std::vector<int>::iterator ite = vector.end();
        ++it;
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::vector<int> s(vector);
        std::cout << "---------after copy" <<std::endl;
        std::vector<int>::iterator _it = s.begin();
        std::vector<int>::iterator _ite = s.end();
        while (_it != _ite)
        {
            std::cout << *_it << std::endl;
            ++_it;
        }
    }
    return 0;
}