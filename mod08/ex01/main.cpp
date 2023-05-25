/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:47:21 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/25 18:46:24 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
 #include <algorithm>
#include "Span.hpp"

int main( void ) {

    // std::stack<int, std::>
    try
    {
    
   

        Span sp = Span(5);
        srand(10);
        int i(-1);
        while(++i < 3)
              sp.addNumber(rand());

        std::vector<int> vec(2,100);
        

        sp.addRange(vec.begin(),vec.end());

        // Span test(1);
        // test.addNumber(100);

       // std::cout << "shit " << test.longestSpan() << std::endl;
        std::cout << "short " << sp.shortestSpan() << std::endl;
        std::cout << "longest  " << sp.longestSpan() << std::endl;

        sp.show();

        //sp

       // sp.addNumber({10,20,30});
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;

}