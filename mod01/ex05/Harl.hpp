/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 22:53:54 by aniouar           #+#    #+#             */
/*   Updated: 2023/02/08 15:30:53 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>

class Harl
{
    private:
        void (Harl::*complains[4])(void);
        std::string keys[4];
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        Harl();
        void    complain( std::string level);
};