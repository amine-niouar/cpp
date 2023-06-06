/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:47:21 by aniouar           #+#    #+#             */
/*   Updated: 2023/06/06 18:32:17 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include "PmergeMe.hpp"
#include "PmergeYou.hpp"


#define GREEN "\033[1;32m"
#define RESET "\033[0m"


void line()
{
     std::cout << "--------------------------------" << std::endl;
}


void show(std::vector<int> &l,std::string f)
{
    std::vector<int>::iterator start,last;

    std::cout << f << " [ ";
    start = l.begin();
    last = --(l.end());
    while(start != l.end())
    {
        std::cout << *start;
        if(start != last)
            std::cout << ",";
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




void pairs(std::vector<int> &l)
{
   
    show(l,"pairs");
    
    std::vector<std::pair<int,int > > pairs;
    std::vector<int>small,large;
   

    int i,size,x,count(0);
    int tmp[2];

   // count = fill_pairs_vec(pairs,l);
    
    
    size = l.size();
    x = 0;
    i = -1;
    while(++i < size)
    {
        tmp[x++] = l[i];
        if(i % 2 == 1)
        {
            pairs.push_back(std::make_pair(tmp[0],tmp[1]));
            x = 0;
            count += 2;
        }
    }
    
   std::vector<std::pair<int,int> >::iterator it;
    it = pairs.begin();
    while(it != pairs.end())
    {
        if(it->first > it->second)
            std::swap(it->first,it->second);
      
        std::cout << it->first << " " << it->second << std::endl;
        ++it;
    }
    
    sort(pairs.begin(),pairs.end());

    
    line();
     it = pairs.begin();
    while(it != pairs.end())
    {
    
        small.push_back(it->first);
         large.push_back(it->second);
        std::cout << it->first << " " << it->second << std::endl;
        ++it;
    }
    

    
    show(small,"small");
    show(large,"large");

      std::vector<int>::iterator upper1, upper2,itx;
      int distance;
      
 
    itx = small.begin();

    while(itx != small.end())
    {
          
        upper1 = std::upper_bound(large.begin(), large.end(), *itx);
         distance = upper1 - large.begin();
        //std::cout << "upper_bound for element "<< *itx << " is at position : " << (distance) << std::endl;
        large.insert(large.begin() + distance,*itx);
        ++itx;
    }
    if(count < size)
    {
        std::cout << l[count] << std::endl;
        upper1 = std::upper_bound(large.begin(), large.end(),l[count]);
        distance = upper1 - large.begin();
        large.insert(large.begin() + distance,l[count]);
    }
    show(large,"large");
}



int main( int ac,char **av) {

    // (void)ac;
    // (void)av;
    
    int number; 
    std::string tmp;
    PmergeMe p;
    PmergeYou y;

    try
    {
        if(ac > 1)
        {
            std::vector<int> l;
            int i(0);

            while(++i < ac)
            {
                tmp.assign(av[i]);
                std::istringstream iss(tmp);
                
                if(tmp.find_first_not_of("0123456789" ) == std::string::npos)
                {
                    iss >> number;
                    //l.push_back(number);
                    y.fill_c(number);
                    //p.fill_c(number);
                }
                else
                    throw std::runtime_error("Error bad number input");
            
            }
        // pairs(l);
            //merge(l);
            //show(l,"sample");
            
            y.iter_vec("before");
            y.merge_vec();
            y.iter_vec("after");
        }
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    


   




    


  

  
       
    
    return 0;

}