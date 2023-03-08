/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:56:00 by aniouar           #+#    #+#             */
/*   Updated: 2023/02/26 10:56:24 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main()
{

   std::string str("HI THIS IS BRAIN");
   std::string *stringPTR = &str;
   std::string& stringREF = str;


   std::cout << "Memory Address of string variable " << &str << std::endl;
   std::cout << "Memory Address of string pointer " << stringPTR << std::endl;
   std::cout << "Memory Address of string reference " << &stringREF << std::endl;

   std::cout << "Value of string variable " << str << std::endl;
   std::cout << "Value of Address of string pointer " << *stringPTR << std::endl;
   std::cout << "Value of Address of string reference " << stringREF << std::endl;
   
}