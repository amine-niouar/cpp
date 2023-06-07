/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:07:19 by aniouar           #+#    #+#             */
/*   Updated: 2023/06/07 12:43:59 by aniouar          ###   ########.fr       */
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
        RPN();
        RPN(RPN &r);
        RPN& operator=(RPN &r);
        RPN(std::string &e);
        void execute();
        ~RPN();
};