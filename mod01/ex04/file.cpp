/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:09:55 by aniouar           #+#    #+#             */
/*   Updated: 2022/12/22 21:05:53 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "file.hpp"

Sed::Sed(std::string f,std::string s,std::string r) : filename(f),search(s),replacestr(r)
{
}

int Sed::check_errors(void)
{
     readMode.open(filename,std::ios::in);

     if(readMode.good())
        return (1);
    return (0);
}

void Sed::get_stream(void)
{
    std::string line;

    while(std::getline(readMode,line))
    {
        stream.append(line);
        stream.append("\n");
    }
}


 int Sed::set_stream(void)
 {
    int f;
    int start,end,i;
    
    writeMode.open(filename,std::ios::out);
    if(!writeMode.good())
        return (0);
     
    f = stream.find(search);

    while(f != -1)
    {
        stream.erase(f,search.size());
        stream.insert(f,replacestr);
        f = stream.find(search,f+1);
    }

    writeMode << stream;
        
     return (1);
 }


 Sed::~Sed()
 {
    readMode.close();
    writeMode.close();
 }