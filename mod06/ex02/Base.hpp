/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:16:59 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/22 19:42:43 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BASE_H__
#define __BASE_H__

#include <iostream>


class Base
{
    public:
        virtual ~Base(){};
        Base * generate(void);
        void identify(Base* p);
        void identify(Base& p);
};


#endif