# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pollo <pollo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/12 22:19:18 by pollo             #+#    #+#              #
#    Updated: 2023/05/16 10:21:55 by pollo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= 	g++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror

NAME	=	agendita
SRC		=	main.cpp
OBJ		=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(NAME)