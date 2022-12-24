/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 22:53:54 by aniouar           #+#    #+#             */
/*   Updated: 2022/12/23 23:14:23 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>

class Harl
{
    private:
        std::map<std::string,void (Harl::*)()> complains;
    public:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        Harl();
        void    complain( std::string level);
};