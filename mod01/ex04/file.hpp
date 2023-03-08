/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:06:50 by aniouar           #+#    #+#             */
/*   Updated: 2023/02/23 16:01:50 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// class reponsable for ouput and input wow hhhhh
#include <iostream>
#include<fstream>

class Sed
{
    private:
        std::string filename;
        std::string newfile;
        std::string search;
        std::string replacestr;
        std::string stream;
        std::fstream readMode;
        std::fstream writeMode;
    public:
        Sed(std::string f,std::string s,std::string r,std::string nf);
        int check_errors(void);
        void get_stream(void);
        int set_stream(void);
        ~Sed();
};