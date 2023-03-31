/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 03:25:13 by aniouar           #+#    #+#             */
/*   Updated: 2023/03/24 15:00:24 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>


class Fixed
{
    private:
        int fixed_point;
        static const int fract = 8;
    public:
        Fixed();
        Fixed(const Fixed &f);
        Fixed(const int integer);
        Fixed(const float float_point);
        
        Fixed& operator=(const Fixed & f);

        // Arithmetic
        Fixed operator + (const Fixed& f);
        Fixed operator - (const Fixed& f);
        Fixed operator * (const Fixed& f);
        Fixed operator / (const Fixed& f);

        //compraison
        bool operator > (Fixed f) const;
        bool operator < (Fixed f) const;
        bool operator >= (Fixed f) const;
        bool operator <= (Fixed f) const;
        bool operator == (Fixed f) const;
        bool operator != (Fixed f) const;

        //Post && Pre
        Fixed& operator ++ ();
        Fixed  operator++(int);
        Fixed& operator -- ();
        Fixed  operator--(int);


        // min max shit

        static Fixed & min(Fixed & f1,Fixed & f2);
        static Fixed & min(const Fixed & f1,const Fixed & f2);
        static Fixed & max(Fixed & f1,Fixed & f2);
        static Fixed & max(const Fixed & f1,const Fixed & f2);

    
        
        
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream & operator<<(std::ostream & o,Fixed const & f);


