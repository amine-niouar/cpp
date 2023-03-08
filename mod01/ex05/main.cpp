/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:05:31 by aniouar           #+#    #+#             */
/*   Updated: 2023/02/25 09:37:09 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl h;
   
    std::cout << "level debug " << std::endl; 
    h.complain("debug");
    std::cout << "level error " << std::endl; 
    h.complain("error");
    std::cout << "level info " << std::endl; 
    h.complain("info");
    std::cout << "level warning " << std::endl; 
    h.complain("warning");
    h.complain("ddddjnvkjddfv");
}
