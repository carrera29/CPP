# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 12:13:33 by clcarrer          #+#    #+#              #
#    Updated: 2023/05/24 15:21:38 by clcarrer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	zombie
SRC		=	main.cpp \
			Zombie.cpp \
			randomChump.cpp \
			Zombie.cpp
OBJ       = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

SRC_DIR	= ./src
OBJ_DIR	= ./obj
INC_DIR = ./include

CC		=	g++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror -I $(INC_DIR)

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

re:		fclean all

.PHONY: all debug clean fclean re