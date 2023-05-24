/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:56:27 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/23 11:25:47 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"




int main()
{
    Base b;

    Base *r = b.generate();
    Base *d = new A();
    b.identify(r);
    b.identify(*r);

    b.identify(d);
}