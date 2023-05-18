/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:48:20 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/18 20:06:34 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdint>

typedef struct s_data
{
    void *shitdata;
} Data;

class Serializer
{
    public:
        Serializer();
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
        ~Serializer();
};