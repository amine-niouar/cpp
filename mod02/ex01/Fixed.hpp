/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 03:25:13 by aniouar           #+#    #+#             */
/*   Updated: 2023/03/08 23:52:46 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Fixed
{
    private:
        int fixed_point;
        static const int fract = 8;
    public:
        Fixed();
        Fixed(Fixed &f);
        Fixed(const int integer);
        Fixed(const float float_point);
        Fixed& operator=(Fixed& f);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
};