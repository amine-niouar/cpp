/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:33:56 by aniouar           #+#    #+#             */
/*   Updated: 2023/01/23 21:21:34 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon* wp;
        std::string name;
    public:
        HumanB(std::string n);
        void setWeapon(Weapon& wpp);
        void attack();
        ~HumanB();
};