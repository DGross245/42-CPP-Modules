# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgross <dgross@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 22:53:18 by dgross            #+#    #+#              #
#    Updated: 2024/05/17 23:11:39 by dgross           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= FragTrap

VPATH			= include:

SRC				= ClapTrap.cpp\
				  ScavTrap.cpp\
				  FragTrap.cpp\
				  main.cpp

HEADER			= ClapTrap.hpp \
				  FragTrap.hpp\
				  ScavTrap.hpp

OBJ_DIR			= ./obj/

OBJ				= $(addprefix $(OBJ_DIR),$(SRC:.cpp=.o))

CC				= c++

CFLAGS			= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)

obj/%.o: %.cpp
	@$(CC) $(CFLAGS) -I./includes -c $< -o $@

$(NAME): obj $(OBJ)
	@$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	@$(RM) -rf obj

fclean: clean
	@$(RM) -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re