# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/22 18:39:32 by aniouar           #+#    #+#              #
#    Updated: 2023/01/22 18:39:33 by aniouar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = tests.cpp Account.cpp
NAME =  Account
HEADER = Account.hpp
OBJS = $(SRCS:.cpp=.o)
CC = c++
HEADER = Account.hpp
CFLAGS = -Wall -Werror -Wextra -std=c++98
all : $(NAME)
$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
$(OBJS) : $(HEADER)
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all
.PHONY: clean fclean re all