/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 19:38:18 by aniouar           #+#    #+#             */
/*   Updated: 2023/06/01 15:27:52 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <deque>
#include <list>
#include <vector>
#include <stack>

template<typename T,typename c=std::deque<T> >
class MutantStack : public std::stack<T,c>
{
    public:
        typedef typename c::iterator iterator;
        typedef typename c::const_iterator const_iterator;
        
        
        iterator begin(){ return this->c.begin();}
        iterator end(){ return this->c.end();}

        const_iterator begin() const { return this->c.begin();}
        const_iterator end() const{ return this->c.end();}
};