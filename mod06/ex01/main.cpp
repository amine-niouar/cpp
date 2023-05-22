/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:03:41 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/22 19:35:16 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{

	Data *p,*ds;
	uintptr_t s_int;

	p = new Data;
	p->str = "message";
	ds = 0;

	s_int = Serializer::serialize(p);
	ds = Serializer::deserialize(s_int);


	std::cout << p << " " << ds << " " << std::hex  << s_int << std::endl;
	 std::cout << ds->str << std::endl;
	return (0);
}