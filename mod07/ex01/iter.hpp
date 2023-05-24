/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:05:39 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/24 19:23:02 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void print(T a)
{
    std::cout << a << std::endl;
}



template <typename T>
void iter(T *arr,T size,void (*f)(T element)){
    int i(-1);
    
    while(++i < size)
        f(arr[i]);
}