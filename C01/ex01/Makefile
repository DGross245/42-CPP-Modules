# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgross <dgross@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 14:30:10 by dgross            #+#    #+#              #
#    Updated: 2023/04/05 10:10:00 by dgross           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Zombie

SRC				= Zombie.cpp\
				  zombieHorde.cpp\
				  main.cpp

HEADER			= Zombie.hpp

OBJ_DIR			= ./obj/

OBJ				= $(addprefix $(OBJ_DIR),$(SRC:.cpp=.o))

CC				= c++

CFLAGS			= -Wall -Wextra -Werror -std=c++98
all: $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)

obj/%.o: %.cpp obj $(HEADER)
	@$(CC) $(CFLAGS) -I./$(HEADER) -c $< -o $@

$(NAME): $(OBJ)
	@$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	@$(RM) -rf obj

fclean: clean
	@$(RM) -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
