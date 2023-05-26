/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:05:39 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/26 10:58:38 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void printy(T a)
{
    std::cout << a << std::endl;
}



template <typename T>
void iter(T *arr,int size,void (*f)(T const &element)){
    int i(-1);
    
    while(++i < size)
        f(arr[i]);
}

template <typename T>
void iter(T *arr,int size,void (*f)(T &element)){
    int i(-1);
    
    while(++i < size)
        f(arr[i]);
}