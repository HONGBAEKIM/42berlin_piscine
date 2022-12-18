NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
		srcs/ft_strlen.c srcs/ft_swap.c

OBJECTS = $(SRCS:.c=.o)

CC = GCC
CCFLAG = -Wall -Wextra -Werror

AR = ar
ARFLAG = crs

RM = rm
RMFLAG = rf


%.o : %.c
	$(cc) $(CCFLAG) -c $^ -o $@ -I includes 
                            
$(NAME) : $(OBJECTS)
	$(AR) $(ARFLAG) -o $(NAME) $(OBJECTS)

all : $(NAME)

clean : 
	$(RM) $(RMFLAG) $(OBJECTS)

fclean : clean
	$(RM) $(RMFLAG) $(NAME)

re : fclean all

.PHONY: all clean fclean re