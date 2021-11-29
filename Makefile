NAME		= libftprintf.a

INC_DIR		= header/

CFLAGS = -Wall -Wextra -Werror
HEADERS		= ft_printf.h
HEADERS_B = ft_printf_bonus.h
SRC = \
		ft_strlen.c ft_format_input_spec.c ft_format_p.c ft_format_precision.c \
		ft_len.c ft_format.c ft_input.c ft_memset.c ft_parce_flags.c ft_parcer_precision.c \
		ft_printf.c ft_parcer_specifier.c ft_parcer_wdt.c ft_precision.c ft_print_address_p.c \
		format_widht_ch_str.c ft_print_lower_x.c ft_print_string.c ft_print_upper_x.c ft_print_u.c ft_parcer_minus.c \
		format_zero.c ft_printf_char.c ft_printf_i_d.c ft_putstr_len.c ft_read_file.c \
		ft_atoi.c ft_res0_init.c ft_specifier_c.c ft_specifier_i_d.c ft_specifier_lower_x.c ft_specifier_p_address.c \
		ft_bzero.c ft_specifier_s.c ft_specifier_u.c ft_specifier_upper_x.c ft_strdel.c ft_diff_format.c format_minus.c \
		ft_flags.c ft_strnew.c ft_subjoin.c ft_substr.c ft_type_solve.c ft_widht.c ft_printf_i_d.c ft_strcmp.c \
		ft_printf.c 
SRC_B = \
		ft_strlen.c ft_format_input_spec.c ft_format_p.c ft_format_precision.c \
		ft_len.c ft_format.c ft_input.c ft_memset.c ft_parce_flags.c ft_parcer_precision.c \
		ft_printf.c ft_parcer_specifier.c ft_parcer_wdt.c ft_precision.c ft_print_address_p.c \
		format_widht_ch_str.c ft_print_lower_x.c ft_print_string.c ft_print_upper_x.c ft_print_u.c \
		format_zero.c ft_printf_char.c ft_printf_i_d.c ft_putstr_len.c ft_read_file.c ft_parcer_minus.c \
		ft_atoi.c ft_res0_init.c ft_specifier_c.c ft_specifier_i_d.c ft_specifier_lower_x.c ft_specifier_p_address.c \
		ft_bzero.c ft_specifier_s.c ft_specifier_u.c ft_specifier_upper_x.c ft_strdel.c ft_diff_format.c format_minus.c \
		ft_flags.c ft_strnew.c ft_subjoin.c ft_substr.c ft_type_solve.c ft_widht.c ft_printf_i_d.c ft_strcmp.c \
		ft_printf_bonus.c

OBJ = ${SRC:.c=.o}
OBJ_B	=	$(SRC_B:.c=.o)
RM = rm -f
CC = gcc
AR = ar rcs

.c.o: $(SRC)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJ)
	$(AR) $@ $^

bonus: $(OBJ_B)
	$(AR) $(NAME) $^

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}

all: $(NAME)

clean:
	$(RM) $(OBJ) $(OBJ_B)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re