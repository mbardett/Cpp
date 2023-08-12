# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trondani <trondani@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 14:10:38 by trondani          #+#    #+#              #
#    Updated: 2023/03/27 17:37:19 by trondani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#SET
EXE		=	phonebook
SRC		=	main.cpp Contact.cpp 		
OBJ		=	$(SRC:.cpp=.o)
CC		=	c++
FLAGS	= 	-Wall -Wextra -Werror -std=c++98

#COLORS
RESET			= 	\033[0m
GREEN 			= 	\033[38;5;46m
RED 			= 	\033[38;5;160m

#RULES
all: $(EXE)

%.o: %.cpp
	@echo "Compiling... $(GREEN)$<$(RESET)"
	@$(CC) $(FLAGS) -c $< -o $@

$(EXE): $(OBJ)	
	@$(CC) $(FLAGS) $(OBJ) -o $(EXE)
	@echo "$(GREEN)Program ready!$(RESET)"
	@echo "Use $(GREEN)leaks -atExit -- ./$(EXE)$(RESET) to test!"

clean:	
	@/bin/rm -f $(OBJ)
	@echo "$(RED)Object files removed!$(RESET)"

fclean: clean	
	@/bin/rm -f $(EXE)
	@echo "$(RED)Exe files removed!$(RESET)"

re: fclean all

.PHONY: all clean fclean re