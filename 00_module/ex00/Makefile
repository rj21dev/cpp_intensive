NAME	= megaphone

SRCS	= megaphone.cpp
OBJS	= $(patsubst %.cpp, %.o, $(SRCS))
DEPS	= $(patsubst %.cpp, %.d, $(SRCS))

CC	= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -MMD

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -I. -c $< -o $@

$(NAME): $(OBJS) Makefile
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	rm -f *.o *.d

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:
	all clean fclean re

-include $(DEPS)
