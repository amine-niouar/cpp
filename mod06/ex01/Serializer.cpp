/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:00:32 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/23 10:05:28 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    
}

Serializer::Serializer(Serializer &s)
{
    (void)s;
}

Serializer& Serializer::operator=(Serializer& s)
{
    if(this != &s)
        ;
    return (*this);
} 

uintptr_t Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
    
    return (reinterpret_cast<Data*>(raw));
}

Serializer::~Serializer()
{
    
}