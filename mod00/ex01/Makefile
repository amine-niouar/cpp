SRCS = main.cpp PhoneBook.cpp Contact.cpp
NAME =  PhoneBook
HEADER = PhoneBook.hpp Contact.hpp
OBJS = $(SRCS:.cpp=.o)
CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
all : $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)
$(OBJS) : $(HEADER)

clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all
.PHONY: clean fclean re all