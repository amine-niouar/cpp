/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:45:38 by aniouar           #+#    #+#             */
/*   Updated: 2023/06/06 18:35:04 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


PmergeMe::PmergeMe()
{
    
}

PmergeMe::PmergeMe(PmergeMe &pm)
{
    c1 = pm.c1;
    c2 = pm.c2;
    large_vec = pm.large_vec;
    large_deque = pm.large_deque;
    start_c1 = pm.start_c1;
    end_c1 = pm.end_c1;
    start_c2 = pm.start_c2;
    end_c2 = pm.end_c2;
}

PmergeMe& PmergeMe::operator=(PmergeMe &pm)
{
    if(this != &pm)
    {
        c1 = pm.c1;
        c2 = pm.c2;
        large_vec = pm.large_vec;
        large_deque = pm.large_deque;
        start_c1 = pm.start_c1;
        end_c1 = pm.end_c1;
        start_c2 = pm.start_c2;
        end_c2 = pm.end_c2;
    }
    return (*this);
}

void PmergeMe::fill_c(int &n)
{
    c1.push_back(n);
    c2.push_back(n);
}

int PmergeMe::fill_pairs_deque(std::deque<std::pair<int,int > > &pairs,std::deque<int> &l)
{
    int i,size,x,count(0);
    int tmp[2];

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
    return count;
}

int PmergeMe::fill_pairs_vec( std::vector<std::pair<int,int > > &pairs,std::vector<int> &l)
{
    int i,size,x,count(0);
    int tmp[2];

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
    return count;
}

 void PmergeMe::sort_pairs_divide(std::vector<std::pair<int,int > > &pairs,std::vector<int> &s,std::vector<int> &l)
 {
      
    std::vector<std::pair<int,int> >::iterator it;
    it = pairs.begin();
    while(it != pairs.end())
    {
        if(it->first > it->second)
            std::swap(it->first,it->second);
        ++it;
    }
    sort(pairs.begin(),pairs.end());
    it = pairs.begin();
    while(it != pairs.end())
    {
    
        s.push_back(it->first);
         l.push_back(it->second);
        ++it;
    }
 }

void PmergeMe::sort_pairs_deque_divide(std::deque<std::pair<int,int > > &pairs,std::deque<int> &s,std::deque<int> &l)
{
    std::deque<std::pair<int,int> >::iterator it;
    it = pairs.begin();
    while(it != pairs.end())
    {
        if(it->first > it->second)
            std::swap(it->first,it->second);
        ++it;
    }
    sort(pairs.begin(),pairs.end());
    it = pairs.begin();
    while(it != pairs.end())
    {
    
        s.push_back(it->first);
         l.push_back(it->second);
        ++it;
    }
}

void PmergeMe::insert_at(std::vector<int> &vec,int value)
{
    std::vector<int>::iterator upper;
    int distance;
    

    upper = std::upper_bound(vec.begin(), vec.end(), value);
    distance = upper - vec.begin();
     vec.insert(vec.begin() + distance,value);
}

void PmergeMe::insert_deque_at(std::deque<int> &deq,int value)
{
    std::deque<int>::iterator upper;
    int distance;
    

    upper = std::upper_bound(deq.begin(), deq.end(), value);
    distance = upper - deq.begin();
     deq.insert(deq.begin() + distance,value);
}

void PmergeMe::merge_vec_rec(std::vector<int> &l)
{
    std::vector<int>::iterator itx;
    std::vector<std::pair<int,int> >::iterator it;
    std::vector<std::pair<int,int > > pairs;
    std::vector<int>small;
    int count(0),size;
    
    size = l.size();
    if(size == 1)
    {
        large_vec.push_back(l[0]);
        return;
    }
    count = fill_pairs_vec(pairs,l);
    
    sort_pairs_divide(pairs,large_vec,small);
    itx = small.begin();

    while(itx != small.end())
    {
        insert_at(large_vec,*itx);
        ++itx;
    }
    if(count < size && count > 0)
        insert_at(large_vec,l[count]);
}

void PmergeMe::merge_deq_rec(std::deque<int> &d)
{
    std::deque<std::pair<int,int > > pairs;
    std::deque<int>small;
    std::deque<std::pair<int,int> >::iterator it;
    std::deque<int>::iterator itx;
    int count(0),size;

    
    size = d.size();
    if(size == 1)
    {
        large_deque.push_back(d[0]);
        return;
    }
    count = fill_pairs_deque(pairs,d);
    sort_pairs_deque_divide(pairs,large_deque,small);
    itx = small.begin();
    while(itx != small.end())
    {
        insert_deque_at(large_deque,*itx);
        ++itx;
    }
    if(count < size && count > 0)
        insert_deque_at(large_deque,d[count]);
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
    std::deque<int>::iterator it;
    int size(0);
    double duration_c1,duration_c2;

    duration_c1 = (end_c1.tv_sec - start_c1.tv_sec) * 1000000 + (end_c1.tv_usec - start_c1.tv_usec);
    duration_c2 = (end_c2.tv_sec - start_c2.tv_sec) * 1000000 + (end_c2.tv_usec - start_c2.tv_usec);
    
    if(stat == "before")
    {
        size = c1.size();
        std::cout << stat << ": ";
        it = c2.begin();
        while(it != c2.end())
        {
            std::cout << *it << " ";
            ++it;
        }
        std::cout << std::endl;
    }
    else
    {
        size = large_vec.size();
        std::cout << stat << ": ";
        it_start = large_vec.begin();
        while(it_start != large_vec.end())
        {
            std::cout << *it_start << " ";
            ++it_start;
        }
        std::cout << std::endl;
    }
   
    
    if(stat == "after")
    {
        std::cout << "Time to process a range of " << size  << " elements with std::vector : " << duration_c1 << " us " << std::endl;
         std::cout << "Time to process a range of " << size  << " elements with std::deque : " << duration_c2 << " us " << std::endl;
    }
        
}

PmergeMe::~PmergeMe()
{
    
}
