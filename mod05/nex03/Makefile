# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 17:26:16 by aniouar           #+#    #+#              #
#    Updated: 2023/05/03 18:35:14 by aniouar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
		 PresidentialPardonForm.cpp Intern.cpp
NAME =  Intern 
HEADER =  Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp \
		PresidentialPardonForm.hpp Intern.hpp

CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 
all : $(NAME)
$(NAME): $(SRCS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(SRCS)
$(OBJS) : $(HEADER)
clean :
	rm -rf $(OBJS)
fclean : clean
	rm -rf $(NAME)
re : fclean all
.PHONY: clean fclean re all