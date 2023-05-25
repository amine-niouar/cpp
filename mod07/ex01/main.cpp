/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:47:21 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/25 10:12:50 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

#define GREEN "\033[1;32m"
#define RESET "\033[0m"




void line()
{
     std::cout << "--------------------------------" << std::endl;
}

class Awesome
{
public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
private:
    int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }
void wiredo() {
    int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
    Awesome tab2[5];
    iter( tab, 5, print );
    iter( tab2, 5, print);
}


void printx(int a)
{
    std::cout << a << std::endl;
}

int main( void ) {
    
    int a[5] = { 10, 50, 30, 40, 20 };

    iter<int>(a,5,print<int>);
    line();
    wiredo();
    return 0;

}