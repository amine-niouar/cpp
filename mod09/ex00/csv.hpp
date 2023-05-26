/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   csv.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:47:21 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/26 20:24:49 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include<fstream>


class csv
{
    private:
        std::map<std::string,double> data;
        std::fstream readHandle;
        std::string dB;
    public:
        class InError : public std::exception
        {
            public:
               
                 const char* what() const throw() 
                 { return " Cant load Database ";};
        };
        // throw exception if file not exist
        csv(std::string db_str);
        void loadData();
        std::map<std::string,double>  getData() const;
        ~csv();
};