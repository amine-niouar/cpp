/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 03:35:32 by aniouar           #+#    #+#             */
/*   Updated: 2023/03/26 00:15:13 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixed_point = 0;
}

Fixed::Fixed(Fixed& f)
{
    std::cout << "Copy constructor called" << std::endl;
    
    fixed_point = f.fixed_point;
    getRawBits();
}

Fixed& Fixed::operator=(Fixed& f)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &f)
        fixed_point = f.fixed_point;
    getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fixed_point);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    fixed_point = raw;
}