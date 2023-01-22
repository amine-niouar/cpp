# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/22 18:39:27 by aniouar           #+#    #+#              #
#    Updated: 2023/01/22 18:39:28 by aniouar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = megaphone.cpp
NAME =  megaphone
OBJS = $(SRCS:.cpp=.o)
CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
all : $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all
.PHONY: clean fclean re all