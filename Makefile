build:
	gcc -Wall -Wextra -Werror -c srcs/*.c
	ar rc libft.a *.o
	gcc1 *.c -L . -lft
all: *.o $(objects) .a $(objects)
clean:
	-rm *.o $(objects)

fclean: clean
	-rm *.a $(objects)

re: fclean all
