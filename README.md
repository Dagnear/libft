# libft
A custom C library with useful functions

### Installation
`git clone https://github.com/F1orin/libft.git && cd libft && make`

Compile with `-L./libft/ -lft`

### List of functions
##### Memory management
* ft_memset
* ft_bzero
* ft_memcpy
* ft_memccpy
* ft_memmove
* ft_memchr
* ft_memcmp
* ft_memalloc
* ft_memdel
* ft_memdup

##### Char management
* ft_isspace
* ft_isalpha
* ft_isdigit
* ft_isalnum
* ft_isascii
* ft_isprint
* ft_toupper
* ft_tolower

##### String management
* ft_strlen
* ft_strdup
* ft_strcpy
* ft_strncpy
* ft_strcat
* ft_strncat
* ft_strlcat
* ft_strchr
* ft_strrchr
* ft_strstr
* ft_strnstr
* ft_strcmp
* ft_strncmp
* ft_strnew
* ft_strdel
* ft_strclr
* ft_striter
* ft_striteri
* ft_strmap
* ft_strmapi
* ft_strequ
* ft_strnequ
* ft_strsub
* ft_strjoin
* ft_strtrim
* ft_strsplit
* ft_strsplit_delim

##### Output management
* ft_putchar_fd
* ft_putchar
* ft_putstr_fd
* ft_putstr
* ft_putendl_fd
* ft_putendl
* ft_putnbr_fd
* ft_putnbr
* ft_putszt_fd
* ft_putszt

##### Converters
* ft_atoi
* ft_itoa
* ft_dignum
* ft_dignum_szt

##### Utils
* ft_max
* ft_min
* arr_len

##### List management
* ft_lstnew
* ft_lstdelone
* ft_lstdel
* ft_lstdel_if
* ft_lstadd
* ft_lstadd_end
* ft_lstiter
* ft_lstmap
* ft_lstsize

##### Tree management
* btree_create_node
* btree_add
* btree_insert_data
* btree_apply_prefix
* btree_apply_infix
* btree_apply_infix_rev
* btree_apply_suffix
* btree_search_item
* btree_level_count
* btree_size
* btree_del
