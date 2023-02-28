# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgross <dgross@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/25 09:53:12 by dgross            #+#    #+#              #
#    Updated: 2023/02/28 09:27:23 by dgross           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Animal

VPATH			= include:

SRC				= Animal.cpp\
				  Cat.cpp\
				  Dog.cpp\
				  WrongAnimal.cpp\
				  WrongCat.cpp\
				  Brain.cpp\
				  main.cpp

HEADER			= Animal.hpp\
				  Cat.hpp\
				  Dog.hpp\
				  WrongAnimal.hpp\
				  WrongCat.hpp\
				  Brain.hpp

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
