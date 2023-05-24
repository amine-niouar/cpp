/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:48:22 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/24 19:02:21 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap(T &a,T &b)
{
    T c;
    c = a;
    a = b;
    b = c;
}

template <typename T>
T min(T a,T b)
{
    return (a >= b) ? b : a;
}

template <typename T>
T max(T a,T b)
{
    return (a <= b) ? b : a;
}
