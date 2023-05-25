# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/25 12:25:15 by clcarrer          #+#    #+#              #
#    Updated: 2023/05/25 13:10:49 by clcarrer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= g++
CFLAGS	= -std=c++98 -Wall -Wextra -Werror

NAME	= brain
SRC		= main.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

.cpp.o:
	@$(CC) $(CFLAGS) -c $< -o $@

debug:	CFLAGS += -g
debug:	re

clean:
	@rm -rf $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:		fclean all

.PHONY: all debug clean fclean re