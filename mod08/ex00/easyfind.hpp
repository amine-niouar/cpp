/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 06:52:58 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/25 08:24:34 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class NotFoundException : public std::exception
{
            public:
               
                 const char* what() const throw() 
                 { return "Occurent not found";};
};

template <typename T,typename L> void easyfind(T arr,L element)
{

    typename T::iterator it;
    for (it = arr.begin(); it != arr.end(); ++it)
    {
        if(element == *it)
        {
            std::cout << *it << std::endl;
            return;
        }
             
    }
    throw NotFoundException();   
};