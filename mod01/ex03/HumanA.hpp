/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:24:36 by aniouar           #+#    #+#             */
/*   Updated: 2023/01/23 21:20:32 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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