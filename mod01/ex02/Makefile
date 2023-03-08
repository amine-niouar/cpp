SRCS = main.cpp 
NAME =  Brain
OBJS = $(SRCS:.cpp=.o)
CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
all : $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)
clean :
	rm -f $(OBJS)
fclean : clean
	rm -rf $(NAME)
re : fclean all
.PHONY: clean fclean re all