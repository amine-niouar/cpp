/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:56:38 by aniouar           #+#    #+#             */
/*   Updated: 2022/12/21 18:37:54 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Zombie
{
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string zombiename);
    void announce( void );
    ~Zombie();
};


Zombie* zombieHorde( int N, std::string name );
