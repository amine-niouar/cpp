/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 03:25:13 by aniouar           #+#    #+#             */
/*   Updated: 2023/03/12 22:57:53 by aniouar          ###   ########.fr       */
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
        Fixed(const Fixed& f);
        Fixed(const int integer);
        Fixed(const float float_point);
        Fixed& operator=(Fixed const & f);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream & operator<<(std::ostream & o,Fixed const & f);
