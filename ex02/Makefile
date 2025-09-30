# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/30 09:40:35 by qumiraud          #+#    #+#              #
#    Updated: 2025/09/30 12:59:54 by qumiraud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AbstractClass

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -Wshadow -std=c++98

SRC = main.cpp\
	AAnimal.class.cpp\
	Dog.class.cpp\
	Cat.class.cpp\
	WrongAnimal.class.cpp\
	WrongCat.class.cpp\
	Brain.class.cpp\


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
