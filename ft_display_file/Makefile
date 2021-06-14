build:
	gcc -Wall -Wextra -Werror ft_putstr.c ft_display_file.c main.c
clean:
	ls | grep -v "\." | grep -v "Makefile" | xargs rm

fclean: clean
	-rm *.o $(objects)

all: ls | grep -v "Makefile" | xargs rm
