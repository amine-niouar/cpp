/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 03:35:32 by aniouar           #+#    #+#             */
/*   Updated: 2023/03/26 00:26:41 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f)
{
    fixed_point = f.fixed_point;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called" << std::endl;
    fixed_point = integer * (1 << fract);
}

Fixed::Fixed(const float float_point)
{
   float number;

    std::cout << "Float constructor called" << std::endl;
    number = roundf(float_point * (1 << fract));
    fixed_point = number;
}

float Fixed::toFloat( void ) const
{
    float number;
    
    number = fixed_point;
    number /= (1 << fract);
    return (number);
}

int Fixed::toInt( void ) const
{
    int number;

    number = fixed_point / (1 << fract);
    return (number);
}


Fixed& Fixed::operator=(Fixed const & f)
{
    if(this != &f)
        fixed_point = f.fixed_point;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return (fixed_point);
}

void Fixed::setRawBits(int const raw)
{
    fixed_point = raw;
}

std::ostream & operator<<(std::ostream & o,Fixed const & f)
{
    o << f.toFloat();
    return o;
}