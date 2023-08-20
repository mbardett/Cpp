# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/18 19:10:40 by mbardett          #+#    #+#              #
#    Updated: 2023/08/18 21:23:15 by mbardett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = very_useful_fix

SRC = Fixed.cpp \
		main.cpp 

OBJ = $(SRC:.cpp = .o)

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

#setting colors for output print
#check this lovely page for more info https://en.wikipedia.org/wiki/ANSI_escape_code

RESET = \033[0m
GREEN = \033[38;5;46m
ZGREEN = \033[38;5;70m
CYAN = \033[38;5;51m
ORANGE = \033[38;5;202m
LBLUE = \033[38;5;195m
DYELL = \033[38;5;221m
PINK = \033[38;5;211m
RED = \033[38;5;160m


%.o : %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)
	@echo "$(LBLUE)Psss, hey, you, need a stronger fix?$(RESET)"
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(NAME): $(OBJ)
		@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
		@rm -f *.o
		@echo "$(LBLUE)all .o files have been removed$(RESET)"

fclean:	clean
		@rm -f $(NAME)
		@echo "$(LBLUE)exe file has been removed$(RESET)"

re: fclean all

 
.PHONY : all clean fclean re