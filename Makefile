FLAGS = -Wall -Wextra -Werror

all:
	gcc $(FLAGS) -o Colleen Colleen.c
	gcc $(FLAGS) -o Grace Grace.c
	gcc $(FLAGS) -o Sully Sully.c

fclean:
	/bin/rm -f Colleen
	/bin/rm -f Grace
	/bin/rm -f Sully

re: fclean all

.PHONY: fclean re all
