/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeYou.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 19:12:14 by aniouar           #+#    #+#             */
/*   Updated: 2023/06/04 19:33:48 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */







#include <iostream>
#include <vector>
#include <deque>
#include <sys/time.h>


//use some type def 

class PmergeYou
{
    private:
        std::vector<int> c1;
        std::deque<int> c2;
        std::vector<int> large_vec;
        std::deque<int> large_deque;
        timeval start_c1;
        timeval end_c1;
        timeval start_c2;
        timeval end_c2;
    public:
        PmergeYou();
        void merge_vec_rec(std::vector<int> &l);
        void merge_deq_rec(std::deque<int> &d);
        int fill_pairs_vec(std::vector<std::pair<int,int > > &pairs,std::vector<int> &l);
        void sort_pairs_divide(std::vector<std::pair<int,int > > &pairs,std::vector<int> &s,std::vector<int> &l);
        void insert_at(std::vector<int> &vec,int value);
        int fill_pairs_deque(std::deque<std::pair<int,int > > &pairs,std::deque<int> &l);
        void sort_pairs_deque_divide(std::deque<std::pair<int,int > > &pairs,std::deque<int> &s,std::deque<int> &l);
        void insert_deque_at(std::deque<int> &deq,int value);
        void show(std::vector<int> &l,std::string f);
        void show_deq(std::deque<int> &l,std::string f);
        void iter_vec(std::string stat);
        void merge_vec();
        void fill_c(int &n);
        ~PmergeYou();
};