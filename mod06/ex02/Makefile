# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 17:26:16 by aniouar           #+#    #+#              #
#    Updated: 2023/05/19 11:05:59 by aniouar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS =  main.cpp Base.cpp
NAME =  Real 


CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 
all : $(NAME)
$(NAME): $(SRCS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(SRCS)
clean :
	rm -rf $(NAME)
fclean : clean
re : fclean all
.PHONY: clean fclean re all