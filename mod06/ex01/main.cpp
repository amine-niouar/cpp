/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:03:41 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/23 11:27:18 by aniouar          ###   ########.fr       */
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

	std::cout << "Address p : " << p << std::endl;
	std::cout << "Serialize..." << std::endl;
	s_int = Serializer::serialize(p);
	std::cout << "Value unit in hex " << std::hex  << s_int << std::endl;
	
	ds = Serializer::deserialize(s_int);
	std::cout << "Address ds : " << ds << std::endl;

	
	
	 std::cout << ds->str << std::endl;
	return (0);
}