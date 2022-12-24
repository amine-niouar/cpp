/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:24:36 by aniouar           #+#    #+#             */
/*   Updated: 2022/12/23 22:31:06 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


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