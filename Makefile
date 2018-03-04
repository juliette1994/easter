##
## Makefile for Makefile in /Users/qu_j/Crusader/bayle_n
## 
## Made by QU Juliette
## Login   <qu_j@etna-alternance.net>
## 
## Started on  Fri Apr 29 15:54:41 2016 QU Juliette
## Last update Mon May  2 14:29:32 2016 QU Juliette
##

C	=	gcc
NAME	=	crusader
SRC	=	main.c		\
		affichage.c	\
		directions.c	\
		directions2.c	\
		initialisation.c\
		libmy.c		\
		tab_point_fct.c	\
		tabs.c		\
		verif_recup.c
OBJ	=	$(SRC:%.c=%.o)
RM	=	rm -f
CFLAGS	=	-W -Wall -Wextra -Werror

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME) a.out crusader

re:		fclean all
