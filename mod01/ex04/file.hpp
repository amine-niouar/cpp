/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:06:50 by aniouar           #+#    #+#             */
/*   Updated: 2022/12/22 21:00:02 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// class reponsable for ouput and input wow hhhhh
#include <iostream>
#include<fstream>

class Sed
{
    private:
        std::string filename;
        std::string search;
        std::string replacestr;
        std::string stream;
        std::fstream readMode;
        std::ofstream writeMode;
    public:
        Sed(std::string f,std::string s,std::string r);
        int check_errors(void);
        void get_stream(void);
        int set_stream(void);
        ~Sed();
};