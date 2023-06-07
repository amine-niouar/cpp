/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   csv.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:47:21 by aniouar           #+#    #+#             */
/*   Updated: 2023/06/07 13:07:44 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <sstream>
#include<fstream>


class csv
{
    private:
        std::map<std::string,double> data;
        std::fstream readHandle;
        std::string dB;
    public:
        csv();
        csv(csv &c);
        csv& operator=(csv &c);
        csv(std::string db_str);
        void loadData();
        std::map<std::string,double>&  getData() ;
        ~csv();
};