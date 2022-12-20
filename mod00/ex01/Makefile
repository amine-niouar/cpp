SRCS = main.cpp PhoneBook.cpp Contact.cpp
NAME =  a.out
OBJS = $(SRCS:.cpp=.o)
CC = c++
CFLAGS = -Wall -Werror -Wextra 
all : $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all
.PHONY: clean fclean re all