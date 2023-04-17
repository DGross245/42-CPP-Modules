# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dna <dna@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/16 11:13:36 by dna               #+#    #+#              #
#    Updated: 2023/04/16 11:17:05 by dna              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Array

SRC				= main.cpp

HEADER			= Array.hpp

OBJ_DIR			= ./obj/

OBJ				= $(addprefix $(OBJ_DIR),$(SRC:.cpp=.o))

CC				= c++

CFLAGS			= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)

obj/%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): obj $(OBJ)
	@$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	@$(RM) -rf obj

fclean: clean
	@$(RM) -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re