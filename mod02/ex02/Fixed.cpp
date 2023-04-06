/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:55:42 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 03:17:43 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed_point = 0;
}

Fixed::Fixed(const Fixed & f)
{
    fixed_point = f.fixed_point;
}

 Fixed::Fixed(const int integer)
{
    fixed_point = integer * (1 << fract);
}

Fixed::Fixed(const float float_point)
{

   float number;

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
    return *this;
}

Fixed Fixed::operator + (const Fixed &f)
{
    Fixed c;
    c.fixed_point = fixed_point + f.fixed_point;
    return (c);
}

Fixed Fixed::operator - (const Fixed &f)
{

    Fixed c;
    c.fixed_point = fixed_point - f.fixed_point;
     
    return (c);
}

Fixed Fixed::operator * (const Fixed &f)
{
    Fixed c;

    c.fixed_point =  (float)(f.fixed_point) / (1 << fract) * (this->fixed_point);
    return (c);
}

Fixed Fixed::operator / (const Fixed &f)
{
    float res;
    res =  ((float) fixed_point / f.fixed_point);
    return (Fixed(res));
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
    if(f1.fixed_point < f2.fixed_point)
        return (f1);
    return (f2);
}


 Fixed & Fixed::min(const Fixed & f1,const Fixed & f2)
{
    if(f1.fixed_point < f2.fixed_point)
       return ((Fixed &)f1);

    return ((Fixed &)f2);
}

Fixed & Fixed::max(Fixed & f1,Fixed & f2)
{
    
    if(f1.fixed_point > f2.fixed_point)
        return (f1);
    return (f2);
}

Fixed & Fixed::max(const Fixed & f1,const Fixed & f2)
{
    if(f1.fixed_point > f2.fixed_point)
            return ((Fixed &)f1);
    return ((Fixed &)f2);
}

