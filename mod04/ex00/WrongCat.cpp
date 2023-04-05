/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 06:11:37 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/05 06:20:31 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    type = "wrongcat";
}

WrongCat::WrongCat(WrongCat &wc) : WrongAnimal(wc)
{
    
}

WrongCat& WrongCat::operator=(WrongCat &wc)
{
    if(this != &wc)
        WrongAnimal::operator=(wc);
    return *this;   
}

void WrongCat::makeSound() const
{
    std::cout << "Meo Meo Meo " << std::endl;
}

WrongCat::~WrongCat()
{
    
}

