/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:03:41 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/20 16:49:18 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{

	Serializer s;
	Data *p,*ds;
	uintptr_t s_int;

	p = new Data;
	p->str = "message";
	ds = 0;

	s_int = s.serialize(p);
	ds = s.deserialize(s_int);


	std::cout << std::hex << p << " " << ds << " " << s_int << std::endl;
	 std::cout << ds->str << std::endl;
	return (0);
}