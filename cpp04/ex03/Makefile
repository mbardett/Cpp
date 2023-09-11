# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 15:37:35 by mbardett          #+#    #+#              #
#    Updated: 2023/09/11 22:34:22 by mbardett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "Interface & recap"

SRC = AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp \
		MateriaSource.cpp \
		main.cpp 

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -g

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
	@echo "$(RED)##########################################################################################################$(RESET)"
	@echo "$(RED)###$(RESET)$(ORANGE)####################################################################################################$(RESET)$(RED)###$(RESET)"
	@echo "$(RED)###$(RESET)$(ORANGE)###$(RESET) The knowledge and wisdom of the Ancients is held in the materia.                             $(ORANGE)###$(RED)###$(RESET)"
	@echo "$(RED)###$(RESET)$(ORANGE)###$(RESET) Anyone with this knowledge can freely use the powers of the Land and the Planet.             $(ORANGE)###$(RED)###$(RESET)"
	@echo "$(RED)###$(RESET)$(ORANGE)###$(RESET) That knowledge interacts between ourselves and the planet calling up magic... or so they say.$(ORANGE)###$(RED)###$(RESET)"
	@echo "$(RED)###$(RESET)$(ORANGE)###$(RESET)                                                                                              $(ORANGE)###$(RED)###$(RESET)"
	@echo "$(RED)###$(RESET)$(ORANGE)###$(RESET)-Sephiroth, FinalFantasy VII                                                                  $(ORANGE)###$(RED)###$(RESET)"
	@echo "$(RED)###$(RESET)$(ORANGE)####################################################################################################$(RESET)$(RED)###$(RESET)"
	@echo "$(RED)##########################################################################################################$(RESET)"
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