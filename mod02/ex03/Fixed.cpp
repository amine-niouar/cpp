/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 03:35:32 by aniouar           #+#    #+#             */
/*   Updated: 2023/03/13 03:08:52 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed_point = 0;
}

Fixed::Fixed(const Fixed& f)
{
    fixed_point = f.fixed_point;
}

Fixed::Fixed(const int integer)
{
    fixed_point = integer * 256;
}

Fixed::Fixed(const float float_point)
{
   float number;


    number = float_point * 256;
    fixed_point = number;
}

float Fixed::toFloat( void ) const
{
     float number;


    number = fixed_point;
    number /= 256;
    return (number);
}

int Fixed::toInt( void ) const
{
    int number;


    number = fixed_point / 256;
    return (number);
}


Fixed& Fixed::operator=(Fixed const & f)
{
    if(this != &f)
        fixed_point = f.fixed_point;
    return *this;
}

Fixed Fixed::operator + (Fixed f) const
{
    int result;

    result = fixed_point + f.fixed_point;
    return (Fixed(result));
}

Fixed Fixed::operator - (Fixed f) const
{
    int result;

    result = fixed_point - f.fixed_point;
    return (Fixed(result));
}

Fixed Fixed::operator * (Fixed f) const
{
    float result;

    result = this->toFloat() * f.toFloat();    
    return (Fixed(result));
}

Fixed Fixed::operator / (Fixed f) const
{
    float result;

    result = fixed_point;
    result /= f.fixed_point;
    return (Fixed(result));
}

bool Fixed::operator > (Fixed f) const
{
    if(fixed_point > f.fixed_point)
        return true;
    return false; 
}

bool Fixed::operator < (Fixed f) const
{
    if(fixed_point < f.fixed_point)
        return true;
    return false; 
}

bool Fixed::operator >= (Fixed f) const
{
    if(fixed_point >= f.fixed_point)
        return true;
    return false; 
}

bool Fixed::operator <= (Fixed f) const
{
    if(fixed_point <= f.fixed_point)
        return true;
    return false; 
}

bool Fixed::operator == (Fixed f) const
{
    if(fixed_point == f.fixed_point)
        return true;
    return false; 
}

bool Fixed::operator != (Fixed f) const
{
    if(fixed_point != f.fixed_point)
        return true;
    return false; 
}

Fixed& Fixed::operator ++ ()
{
    fixed_point += 1;
 
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp;

    temp = *this;
    fixed_point += 1;
    return temp;
}

Fixed& Fixed::operator -- ()
{
    fixed_point -= 1;

     return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp;

    temp = *this;
    fixed_point -= 1;
    return temp;
}

 

Fixed::~Fixed()
{
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
 Fixed & Fixed::min(Fixed & f1,Fixed & f2)
{
    if(f1.toFloat() < f2.toFloat())
        return (f1);
    return (f2);
}


 Fixed & Fixed::min(const Fixed & f1,const Fixed & f2)
{
    Fixed f;
    if(f1.toFloat() < f2.toFloat())
       return ((Fixed &)f1);

    return ((Fixed &)f2);
}

Fixed & Fixed::max(Fixed & f1,Fixed & f2)
{
    
    if(f1.toFloat() > f2.toFloat())
        return (f1);
    return (f2);
}

Fixed & Fixed::max(const Fixed & f1,const Fixed & f2)
{
    if(f1.toFloat() > f2.toFloat())
            return ((Fixed &)f1);
    return ((Fixed &)f2);
}
