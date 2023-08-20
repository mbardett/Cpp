# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/05 15:38:53 by mbardett          #+#    #+#              #
#    Updated: 2023/08/12 21:15:36 by mbardett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  account

SRC = Account.cpp	\
		tests.cpp

OBJ = $(SRC:.cpp = .o)

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

#setting colors for output print
#check this lovely page for more info https://en.wikipedia.org/wiki/ANSI_escape_code

RESET = \033[0m
GREEN = \033[38;5;46m
CYAN = \033[38;5;51m
ORANGE = \033[38;5;202m


%.o : %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)
	@echo "$(CYAN)$< compiled$(RESET)"
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(NAME): $(OBJ)
		@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
		@rm -f *.o
		@echo "$(ORANGE)all .o files have been removed$(RESET)"

fclean:	clean
		@rm -f $(NAME)
		@echo "$(GREEN)exe file has been removed$(RESET)"

re: fclean all

 
.PHONY : all clean fclean re