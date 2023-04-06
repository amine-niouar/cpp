/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 00:54:18 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/04 00:54:19 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &c) : WrongAnimal(c)
{
    
}

WrongCat& WrongCat::operator=(WrongCat &c)
{
    if(this != &c)
        WrongAnimal::operator=(c);
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow Meow Meow ...." << std::endl;
}

WrongCat::~WrongCat()
{
    
}