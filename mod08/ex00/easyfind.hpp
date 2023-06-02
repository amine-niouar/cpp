/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 06:52:58 by aniouar           #+#    #+#             */
/*   Updated: 2023/06/01 11:03:45 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

class NotFoundException : public std::exception
{
    public:
        const char* what() const throw() 
        { return "Element not found";};
};

template <typename T> typename T::iterator easyfind(T arr,int element)
{
    typename T::iterator found;
    

    found = std::find(arr.begin(),arr.end(),element);
    if(found != arr.end())
        return found;
    throw NotFoundException();
    return (found);   
};