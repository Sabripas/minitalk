CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

SRC			= ft_atoi.c \
				ft_allisnum.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_check_same.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_print_int.c \
				ft_putchar_fd.c \
			  	ft_putendl_fd.c \
			  	ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_striteri.c \
			 	ft_strjoin.c \
			  	ft_strlcat.c  \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
			 	ft_strtrim.c \
				ft_substr.c \
				ft_test_str.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_len_to_sep.c \
				ft_num_word.c \
			  	ft_len_num.c \
				ft_printf.c \
				is_chr.c \
				is_d.c \
				is_p.c \
				is_str.c \
				is_u.c \
				is_x.c \
				is_xup.c \
				ft_convert_base.c\
				len_s.c \

BONUS			=	ft_lstadd_back.c \
					ft_lstadd_front.c \
					ft_lstclear.c \
					ft_lstdelone.c \
					ft_lstiter.c \
					ft_lstlast.c \
					ft_lstmap.c \
					ft_lstnew.c \
					ft_lstsize.c

BOLD_GREEN			=	\033[1;32m

NO_COLOR			=	\033[0m

MAIN_PART		=	$(filter-out $(BONUS), $(SRC))

OBJS			=	$(SRC:.c=.o)

MAIN_PART_OBJS	=	$(MAIN_PART:.c=.o)

NAME			=	libft.a

LINK			=	ar rc

all: 		$(NAME)

$(NAME):	$(MAIN_PART_OBJS)
			@$(LINK) $(NAME) $(MAIN_PART_OBJS)
			@$(LIBFT_COMPILED)

bonus:		$(OBJS)
			@$(LINK) $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

COMPILING_LIBFT	=	echo "\n📚 $(BOLD_GREEN)Compiling Libft... \n";

LIBFT_COMPILED	=	echo "📚 Libft compiled! \n$(NO_COLOR)";
					
.c.o:	
	@${CC} ${CFLAGS} -I include -c $< -o ${<:.c=.o} \

.PHONY:		all clean fclean re bonus