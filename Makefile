NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFTDIR = ./libft
LIBFT = $(LIBFTDIR)/libft.a

SRCS = 

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(LIBFT) :
		@make -C $(LIBFTDIR)

$(NAME) : $(LIBFT) $(OBJS)
		@cp $(LIBFT) $(NAME)
		@ar rcs $(NAME) $(OBJS)
		@echo "libftprintf.a created successfully."

%.o : %.c
		@$(CC) $(CFLAGS) -c $< -o $@

clean :
		@rm -f $(OBJS)
		@make -C $(LIBFTDIR) clean

fclean : clean
		@rm -f $(NAME)
		@make -C $(LIBFTDIR) fclean

re : fclean all

.PHONY : all clean fclean re $(LIBFT)