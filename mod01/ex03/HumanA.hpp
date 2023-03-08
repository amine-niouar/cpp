/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:24:36 by aniouar           #+#    #+#             */
/*   Updated: 2023/02/23 10:01:47 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef __HUMANA_H__
#define __HUMANA_H__

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon& wp;
        std::string name;
    public:
        HumanA(std::string n,Weapon& wpp);
        void attack();
        ~HumanA();
};

#endif