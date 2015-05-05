NAME	=		libft.a

CC		=		gcc
CFLAGS	=		-Wall -Wextra -Werror -I .

FUNCS	=	ft_memset				\
			ft_bzero				\
			ft_memcpy				\
			ft_memccpy				\
			ft_memmove				\
			ft_memchr				\
			ft_memcmp				\
			ft_strlen				\
			ft_strdup				\
			ft_strcpy				\
			ft_strncpy				\
			ft_strcat				\
			ft_strncat				\
			ft_strlcat				\
			ft_strchr				\
			ft_strrchr				\
			ft_strstr				\
			ft_strnstr				\
			ft_strcmp				\
			ft_strncmp				\
			ft_atoi					\
			ft_isalpha				\
			ft_isdigit				\
			ft_isalnum				\
			ft_isascii				\
			ft_isprint				\
			ft_toupper				\
			ft_tolower				\
			ft_memalloc				\
			ft_memdel				\
			ft_strnew				\
			ft_strdel				\
			ft_strclr				\
			ft_striter				\
			ft_striteri				\
			ft_strmap				\
			ft_strmapi				\
			ft_strequ				\
			ft_strnequ				\
			ft_strsub				\
			ft_strjoin				\
			ft_strtrim				\
			ft_strsplit				\
			ft_itoa					\
			ft_putchar				\
			ft_putstr				\
			ft_putendl				\
			ft_putnbr				\
			ft_putchar_fd			\
			ft_putstr_fd			\
			ft_putendl_fd			\
			ft_putnbr_fd			\
			ft_lstnew				\
			ft_lstdelone			\
			ft_lstdel				\
			ft_lstadd				\
			ft_lstiter				\
			ft_lstmap				\
			ft_isspace				\
			ft_memdup				\
			ft_max					\
			ft_min					\
			ft_dignum				\
			ft_dignum_szt			\
			ft_putszt_fd			\
			ft_putszt				\
			btree_create_node		\
			btree_add				\
			btree_insert_data		\
			btree_apply_prefix		\
			btree_apply_infix		\
			btree_apply_infix_rev	\
			btree_apply_suffix		\
			btree_search_item		\
			btree_level_count		\
			btree_del				\

SRCS	=	$(addsuffix .c, $(FUNCS))
OBJS	=	$(addsuffix .o, $(FUNCS))

all:	$(NAME)

$(NAME): $(OBJS)
	@ echo -n 'Creating library ... '
	@ ar rc $(NAME) $(OBJS)
	@ ranlib $(NAME)
	@ echo '[done]'

%.o: %.c
	@ $(CC) $(CFLAGS) -c $< -o $@

clean:
	@ echo -n 'Removing objects ... '
	@ rm -f $(OBJS)
	@ echo '[done]'

fclean: clean
	@ echo -n 'Removing library ... '
	@ rm -f $(NAME)
	@ echo '[done]'

re: fclean all

.PHONY: all clean fclean re