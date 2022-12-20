#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
}

void PhoneBook::addContact(Contact c)
{
    if(index <= 7)
          contacts[index++] = c;
    else
          contacts[index] = c;
}

void PhoneBook::wide(std::string s,int iflast)
{
    int i;
    int x;

    i = 0;
    while(s[i])
        i++;
    x = 10 - i; 
    i = 0;
    while(i < x)
    {
        std::cout << " ";
        i++;
    }
    if(!iflast)
        std::cout << "| ";
    else
        std::cout << std::endl;
}

void PhoneBook::search()
{
    int i;
    int inputIndex;

    std::cout << "Index";
    wide("Index",0);
    std::cout << "Firstname";
    wide("Firstname",0);
    std::cout << "Lastname";
    wide("Lastname",0);
    std::cout << "Nickname";
    wide("Nickname",1);


    i = 0;
    while(i < index)
    {
        std::cout << std::to_string(i);
        wide(std::to_string(i),0);
        std::cout << contacts[i].getFirstName();
        wide(contacts[i].getFirstName(),0);
        std::cout << contacts[i].getLastName();
        wide(contacts[i].getLastName(),0);
        std::cout << contacts[i].getNickName();
        wide(contacts[i].getNickName(),1);
        i++;
    }

    std::cout << "Enter an index : ";
    std::cin >> inputIndex;

    if(inputIndex <= index)
    {
        std::cout << std::to_string(inputIndex);
        wide(std::to_string(inputIndex),0);
        std::cout << contacts[inputIndex].getFirstName();
        wide(contacts[inputIndex].getFirstName(),0);
        std::cout << contacts[inputIndex].getLastName();
        wide(contacts[inputIndex].getLastName(),0);
        std::cout << contacts[inputIndex].getNickName();
        wide(contacts[inputIndex].getNickName(),1);
    }
    else
         std::cout << "Out of range ! " << std::endl;
}