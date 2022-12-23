/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:05:31 by aniouar           #+#    #+#             */
/*   Updated: 2022/12/22 21:05:49 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

int main(int ac,char **av)
{
    
    if(ac == 4)
    {

        Sed sed(av[1],av[2],av[3]);

        if(sed.check_errors())
        {
           sed.get_stream();
           if(sed.set_stream())
                 std::cout << "Replace is succesful" << std::endl;
           else
                std::cout << "Problem in writing to file" << std::endl;
        }
        else
            std::cout << "Problem in reading file" << std::endl;

        /*
        std::fstream filename,writefile;
        std::string stream,line,search(av[2]),newstr(av[3]);
        int f;
        int start,end,i;

        filename.open(av[1],std::ios::in);

        while(std::getline(filename,line))
        {
            stream.append(line);
            stream.append("\n");
        }

        f = stream.find(search);

        while(f != -1)
        {
            //std::cout << f << std::endl;
            stream.erase(f,search.size());
            stream.insert(f,newstr);
            f = stream.find(search,f+1);
        }

        filename.close();

        std::ofstream file(av[1]);

        file << stream;
        */


       
    }
    
   

    //std::cout << stream;
}
