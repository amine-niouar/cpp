/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:47:21 by aniouar           #+#    #+#             */
/*   Updated: 2023/06/02 16:44:00 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>



#define GREEN "\033[1;32m"
#define RESET "\033[0m"


void show(std::vector<int> &l,std::string f)
{
    std::vector<int>::iterator start;

    std::cout << f << " [ ";
    
    start = l.begin();
    while(start != l.end())
    {
         std::cout << *start << ",";
         ++start;
    }
    std::cout << "] " << std::endl;   
}


void merge(std::vector<int> &l)
{
    int size,mid;
    std::vector<int> left,right;
    std::vector<int>::iterator it_mid;

    size = l.size();

    if(size > 1)
    {
        mid = size / 2;
        it_mid = l.begin();
        std::advance(it_mid,mid);
        
        left.insert(left.end(),l.begin(),(it_mid));
        right.insert(right.end(),(it_mid),l.end());

        
        
        merge(left);
        merge(right);

       
        std::merge(left.begin(),left.end(),right.begin(),right.end(),l.begin());
    }
    
}




int main( int ac,char **av) {

    // (void)ac;
    // (void)av;
    
    int number; 
    std::string tmp;

    if(ac > 1)
    {
        std::vector<int> l;
        int i(0);

        while(++i < ac)
        {
             tmp.assign(av[i]);
             std::istringstream iss(tmp);
             iss >> number;
             l.push_back(number);
        }
        merge(l);
        show(l,"sample");
    }
    


   




    


  

  
       
    
    return 0;

}