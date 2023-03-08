/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:05:31 by aniouar           #+#    #+#             */
/*   Updated: 2023/02/23 16:06:48 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

int main(int ac,char **av)
{
    
    if(ac == 5)
    {
        int status;
        Sed sed(av[1],av[2],av[3],av[4]);

        if(sed.check_errors())
        {
           
           sed.get_stream();
           status = sed.set_stream();
           if(status == 1)
                 std::cout << "Replace is succesful" << std::endl;
           else if(status == 2)
                 std::cout << "what you search for does not match" << std::endl;
           else
                std::cout << "Problem in writing to file" << std::endl;
        }
        else
            std::cout << "Problem in reading file" << std::endl;
    }
}
