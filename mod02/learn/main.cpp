/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:04:59 by aniouar           #+#    #+#             */
/*   Updated: 2023/03/04 20:15:11 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class Coffee
{
    private:
        std::string type;
    public:
        Coffee()
        {
            type = "";
        }
        Coffee(std::string t)
        {
            type = t;
        }
        // good practice to pass by reference
        Coffee(Coffee& c)
        {
            type = c.type;
        }
        // return an reference to current object
        Coffee& operator = (Coffee& c)
        {
            // compared an andress to object , to current object
            if(this != &c)
                 type = c.type;

            // return an derefference to current object
            return *this;   
        }
        std::string getType(void)
        {
            return  type;
        }
        ~Coffee()
        {
            std::cout << type << std::endl;
        }
         
};


int main()
{
    Coffee c2,c1("expresso"),c3("american");
    Coffee c4(c3);

    std::cout << "type c1 " << c2.getType() << std::endl;
    c2 = c1;

    std::cout << "type c2 " << c2.getType() << std::endl;

      std::cout << "type c2 " << c4.getType() << std::endl;
}