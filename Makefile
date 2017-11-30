##
## Makefile for make in /home/noi7/Lab/cpp/trade
## 
## Made by thomas
## Login   <noi7@epitech.net>
## 
## Started on  Sun Jun 11 22:59:54 2017 thomas
## Last update Mon Jul 24 14:43:17 2017 thomas
##

NAME		=	abstractVM

SRC		=	main.cpp \


OBJ		=	$(SRC:.cpp=.o)

RM		=	rm -rf

CC		=	g++

CXXFLAGS	=	-g -std=c++11 -Wall -pedantic

all		:	$(NAME)

$(NAME)		:	$(OBJ)
			$(CXX) -o $(NAME) $(OBJ)

clean		:
			$(RM) $(OBJ)

fclean		:	clean
			$(RM) $(NAME)

re		:	fclean all
