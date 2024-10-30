# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pollo <pollo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/31 16:51:31 by pollo             #+#    #+#              #
#    Updated: 2024/10/30 10:36:23 by pollo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	PmergeMe

SRC		=	main.cpp \
			PmergeMe.cpp

OBJ       = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

SRC_DIR	= ./src
OBJ_DIR	= ./obj
INC_DIR = ./include

CC		=	c++
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