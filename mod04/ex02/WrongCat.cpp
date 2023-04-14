/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 00:54:18 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/12 00:03:03 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    type = "WrongCat";
    std::cout << "WrongCat is created" << std::endl;
}

WrongCat::WrongCat(WrongCat &c) : WrongAnimal(c)
{
    std::cout << "WrongCat is copied " <<  std::endl;
}

WrongCat& WrongCat::operator=(WrongCat &c)
{
    if(this != &c)
        WrongAnimal::operator=(c);
    std::cout << "WrongCat gets assigned " << std::endl;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow Meow Meow ...." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat gets destructed " << std::endl;
}