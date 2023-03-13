# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgross <dgross@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/13 09:28:25 by dgross            #+#    #+#              #
#    Updated: 2023/03/13 14:26:47 by dgross           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Bureaucrat

VPATH			= include:

SRC				= Bureaucrat.cpp\
				  GradeTooHighException.cpp\
				  GradeTooLowException.cpp\
				  main.cpp

HEADER			= Bureaucrat.hpp \
				  GradeTooHighException.hpp \
				  GradeTooLowException.hpp

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
