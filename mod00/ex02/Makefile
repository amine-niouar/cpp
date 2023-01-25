# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/22 18:39:32 by aniouar           #+#    #+#              #
#    Updated: 2023/01/24 15:24:01 by aniouar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = tests.cpp Account.cpp
NAME =  Account
HEADER = Account.hpp
OBJS = $(SRCS:.cpp=.o)
CC = c++
HEADER = Account.hpp
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
all : $(NAME)
$(NAME): $(OBJS) 
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
$(OBJS) : $(HEADER)
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all
.PHONY: clean fclean re all