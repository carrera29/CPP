NAME	=	wordReplace

CC		=	g++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror -I $(INC_DIR)

SRC_DIR	= ./src
OBJ_DIR	= ./obj
INC_DIR = ./include

SRC		=	main.cpp \
			wReplace.cpp
OBJ       = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

debug:	CFLAGS += -g
debug:	re

clean:
	@rm -rf $(OBJ_DIR)

fclean:	clean
	@rm -f $(NAME)
	@rm -f "kafka.replace.txt"

re:		fclean all

.PHONY: all debug clean fclean re