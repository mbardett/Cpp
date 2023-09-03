# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 15:37:35 by mbardett          #+#    #+#              #
#    Updated: 2023/09/03 21:42:14 by mbardett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap

SRC = ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp \
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


%.o : %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)
	@echo "$(LBLUE)Entering the tavern, the barkeeper asks:\"why are you bringing weapons in here?\"$(RESET)"
	@echo "$(LBLUE)The wizard and that scoundrel that goes by the name of Dritz, reply at the same time\"MIMICS\"$(RESET)"
	@echo "$(LBLUE)\"Mimics?in here!?\" replies the barkeeper$(RESET)"
	@echo "$(LBLUE)He laughs, we laugh,	the Table laughs...\n$(RESET)"
	@echo "$(LBLUE)We kill the Table, Good times...$(RESET)"
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