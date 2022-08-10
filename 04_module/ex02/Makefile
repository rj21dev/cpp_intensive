NAME		= abstract_demo

SRC_DIR		= src/
OBJ_DIR		= obj/
INC_DIR		= inc/

SRC_F		= main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp
SRC			= $(addprefix $(SRC_DIR), $(SRC_F))
OBJ_F		= $(patsubst %.cpp, %.o, $(SRC_F))
DEP_F		= $(patsubst %.cpp, %.d, $(SRC_F))
OBJ			= $(addprefix $(OBJ_DIR), $(OBJ_F))
DEP			= $(addprefix $(OBJ_DIR), $(DEP_F))

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -MMD

all: $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp Makefile
		$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

$(OBJ_DIR):
		mkdir -p $@

$(NAME): $(OBJ_DIR) $(OBJ) Makefile
		$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:
		all clean fclean re

-include $(DEP)