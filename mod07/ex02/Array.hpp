/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:27:29 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/24 20:23:46 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



template <typename T> class Array
{
    private:
        T* arr;
        int len;
    public:
        class OutOfBoundException : public std::exception
        {
            public:
               
                 const char* what() const throw() 
                 { return "Index Passed is out of bound";};
        };
        Array();
        Array(unsigned int n);
        Array(Array &a);
        Array& operator=(Array &a);
        T& operator[](int index);
        int size();
};



template <typename T> Array<T>::Array()
{
    len = 0;
    arr = new T[len];
}

template <typename T> Array<T>::Array(unsigned int n)
{
    len = n;
    arr = new T[len];
}


template <typename T> Array<T>::Array(Array &a)
{
    int i(-1);
    
    arr = new T[a.len];
    while(++i < a.len)
        arr[i] = a.arr[i];
}

template <typename T> Array<T>& Array<T>::operator=(Array &a)
{
    int i(-1);
    
    if(len >= 0)
        delete arr;

    arr = new T[a.len];
    while(++i < a.len)
        arr[i] = a.arr[i];
}
// const[] 
template <typename T> T& Array<T>::operator[](int index)
{
    if(index >= len)
        throw Array<T>::OutOfBoundException();
    return(arr[index]);
}

template <typename T> int Array<T>::size()
{
    return (len);
}


