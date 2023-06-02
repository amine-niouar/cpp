/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 18:11:21 by aniouar           #+#    #+#             */
/*   Updated: 2023/06/02 20:22:23 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


PmergeMe::PmergeMe()
{
    
}

void PmergeMe::fill_c(int &n)
{
    c1.push_back(n);
    c2.push_back(n);
}


void PmergeMe::merge_vec_rec(std::vector<int> &l)
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

        
        
        merge_vec_rec(left);
        merge_vec_rec(right);

       
        std::merge(left.begin(),left.end(),right.begin(),right.end(),l.begin());
    }
}

void PmergeMe::merge_deq_rec(std::deque<int> &d)
{
    int size,mid;
    std::deque<int> left,right;
    std::deque<int>::iterator it_mid;

    size = d.size();

    if(size > 1)
    {
        mid = size / 2;
        it_mid = d.begin();
        std::advance(it_mid,mid);
        
        left.insert(left.end(),d.begin(),(it_mid));
        right.insert(right.end(),(it_mid),d.end());

        
        
        merge_deq_rec(left);
        merge_deq_rec(right);

       
        std::merge(left.begin(),left.end(),right.begin(),right.end(),d.begin());
    }
}

void PmergeMe::merge_vec()
{
    gettimeofday(&start_c1,0);
    merge_vec_rec(c1);
     gettimeofday(&end_c1,0);
    gettimeofday(&start_c2,0);
    merge_deq_rec(c2);
    gettimeofday(&end_c2,0);
   
}

void PmergeMe::iter_vec(std::string stat)
{
    std::vector<int>::iterator it_start;
    int size;
    double duration_c1,duration_c2;

    duration_c1 = (end_c1.tv_sec - start_c1.tv_sec) * 1000000 + (end_c1.tv_usec - start_c1.tv_usec);
    duration_c2 = (end_c2.tv_sec - start_c2.tv_sec) * 1000000 + (end_c2.tv_usec - start_c2.tv_usec);
    size = c1.size();
    std::cout << stat << ": ";
    it_start = c1.begin();
    while(it_start != c1.end())
    {
         std::cout << *it_start << " ";
         ++it_start;
    }
    std::cout << std::endl;
    
    if(stat == "after")
    {
        std::cout << "Time to process a range of " << size  << " elements with std::[..] : " << duration_c1 << " us " << std::endl;
         std::cout << "Time to process a range of " << size  << " elements with std::[..] : " << duration_c2 << " us " << std::endl;
    }
        
}

PmergeMe::~PmergeMe()
{
    
}