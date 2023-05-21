# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pollo <pollo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 10:19:28 by pollo             #+#    #+#              #
#    Updated: 2023/05/16 13:03:04 by pollo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	g++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror

NAME	=	account
SRC		=	Account.cpp \
			tests.cpp
OBJ		=	$(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(NAME)