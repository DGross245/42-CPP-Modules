# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dna <dna@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/16 14:50:52 by dgross            #+#    #+#              #
#    Updated: 2023/04/22 19:21:37 by dna              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Intern

VPATH			= include:

SRC				= Bureaucrat.cpp\
				  AForm.cpp \
				  PresidentialPardonForm.cpp \
				  RobotomyRequestForm.cpp \
				  ShrubberyCreationForm.cpp \
				  Intern.cpp \
				  main.cpp

HEADER			= Bureaucrat.hpp\
				  AForm.hpp \
				  PresidentialPardonForm.hpp \
				  RobotomyRequestForm.hpp \
				  ShrubberyCreationForm.hpp \
				  Intern.hpp

OBJ_DIR			= ./obj/

OBJ				= $(addprefix $(OBJ_DIR),$(SRC:.cpp=.o))

CC				= c++

CFLAGS			= -Wall -Wextra -Werror -std=c++98 -g

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