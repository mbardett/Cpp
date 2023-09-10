# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 15:37:35 by mbardett          #+#    #+#              #
#    Updated: 2023/09/10 19:35:50 by mbardett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AbstractClass

SRC = Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		Brain.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		main.cpp 

OBJ = $(SRC:.cpp=.o)

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
HGREEN = \033[38;5;120m
ICE = \033]38;5;123m


%.o : %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)
	@echo "$(RED)I was especially fond of animals, and was indulged by my parents with a great variety of pets.$(RESET)"
	@echo "$(RED)With these I spent most of my time, and never was so happy as when feeding and caressing them.$(RESET)"
	@echo "$(RED)This peculiarity of character grew with my growth, I derived from it one of my principal sources of pleasure.$(RESET)"
	@echo "$(RED)― Edgar Allan Poe, The Black Cat$(RESET)"
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