/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:47:46 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/23 10:24:05 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <stdlib.h>
#include <limits.h>
#include <iostream>

#define GREEN "\033[1;32m"
#define RESET "\033[0m"

class Scalar
{
    private:
        Scalar();
        Scalar(Scalar &s);
        Scalar& operator=(Scalar& s);
        ~Scalar();
    public:
       
        static bool check_in(double numeric);
        static void print(double  num,double fract_part,double integer_part);
        static void impossible(char *rest,int & size,int & valid);
        static void convert(std::string &s);
        
};
