/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:07:19 by aniouar           #+#    #+#             */
/*   Updated: 2023/06/06 15:16:56 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <stack>

class RPN
{
    private:
        std::string exp;
        std::stack<int> formula;
    public:
        RPN(std::string &e);
        void execute(); 
        void execute_1(); 
};