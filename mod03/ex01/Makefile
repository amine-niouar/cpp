# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 17:26:16 by aniouar           #+#    #+#              #
#    Updated: 2023/04/02 23:47:24 by aniouar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp
NAME =  ScavTrap
HEADER = ClapTrap.hpp ScavTrap.hpp
OBJS = $(SRCS:.cpp=.o)
CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 
all : $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)
$(OBJS) : $(HEADER)
clean :
	rm -rf $(OBJS)
fclean : clean
	rm -rf $(NAME)
re : fclean all
.PHONY: clean fclean re all