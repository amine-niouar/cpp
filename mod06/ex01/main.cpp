/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:03:41 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/18 20:13:26 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{

    Serializer s;
    Data *p,*ds;
    uintptr_t s_int;

    p = new Data;
    ds = 0;

    s_int = s.serialize(p);
    ds = s.deserialize(s_int);

    std::cout << p << " " << ds << " " << s_int << std::endl;
    return (0);
}