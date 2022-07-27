NAME	= account 

SRCS	= tests.cpp Account.cpp
OBJS	= $(patsubst %.cpp, %.o, $(SRCS))
DEPS	= $(patsubst %.cpp, %.d, $(SRCS))

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -MMD

all: $(NAME)

%.o: %.cpp Makefile
	$(CC) $(CFLAGS) -I. -c $< -o $@

$(NAME): $(OBJS) Makefile
	$(CC) $(CFLAGS) $(OBJS) -o $@

curl:
	curl https://projects.intra.42.fr/uploads/document/document/9239/19920104_091532.log > log

run:
	./account > log_my

clean:
	rm -f *.o *.d

fclean: clean
	rm -f $(NAME)
	rm -f log*

re: fclean all

.PHONY:
	all clean fclean re

-include $(DEPS)
