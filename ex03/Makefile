# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/30 13:37:12 by qumiraud          #+#    #+#              #
#    Updated: 2025/09/30 13:37:54 by qumiraud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AMateria

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -Wshadow -std=c++98

SRC = main.cpp\



OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o : %*.cpp
	$(CXX) -o $@ -c $< $(CXXFLAGS)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

run :all $(NAME)
	./$(NAME) Relou

.PHONY : all clean fclean re run
