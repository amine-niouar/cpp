/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:56:05 by aniouar           #+#    #+#             */
/*   Updated: 2023/06/02 20:21:05 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <sys/time.h>


class PmergeMe
{
    private:
        std::vector<int> c1;
        std::deque<int> c2;
        timeval start_c1;
        timeval end_c1;
        timeval start_c2;
        timeval end_c2;
    public:
        PmergeMe();
        void merge_vec_rec(std::vector<int> &l);
        void merge_deq_rec(std::deque<int> &d);
        void merge_vec();
        void iter_vec(std::string stat);
        void fill_c(int &n);
        ~PmergeMe();
};