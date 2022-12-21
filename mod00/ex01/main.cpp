#include <iostream>
#include "PhoneBook.hpp"


void add(PhoneBook *pb)
{
    std::string fn, ln,nk,pn,ds;

    std::cout << "   First name:";
    std::cin >> fn;
    std::cout << "   Last name:";
    std::cin >> ln;
    std::cout << "   Nick name:";
    std::cin >> nk;
    std::cout << "   Phone number:";
    std::cin >> pn;
    std::cout << "   darkest secret:";
    std::cin >> ds;


    if(!fn.empty() && !ln.empty() && !nk.empty() && !pn.empty() && !ds.empty())
    {
         Contact c(fn,ln,nk,pn,ds);
         pb->addContact(c);

    }
    else
        std::cout << "Empty fields" << std::endl;
}


int main()
{
    std::string choose;
    PhoneBook pb;


    std::cout << "1.ADD" << std::endl;
    std::cout << "2.SEARCH" << std::endl;
    std::cout << "3.EXIT" << std::endl;
    std::cout << "choose : " ;


    while(std::getline(std::cin, choose))
    {
        if(choose == "1")
            add(&pb);
        else if(choose == "2")
            pb.search();
        else  if(choose == "3")
            exit(0);
        system("clear");
        std::cout << "1.ADD" << std::endl;
        std::cout << "2.SEARCH" << std::endl;
        std::cout << "3.EXIT" << std::endl;
        std::cout << "choose : ";
    }
}
