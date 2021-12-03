#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct			s_print
{
	int					is_widht;
	int					sign;
    int                 null;
    int                 is_minus;
	int					space;
	int					is_precision;
    int                 precision;
	int					hash;
    int                 is_zero;
    int					value_len;
	char                specifier;
    char                *specifier_value;
    int                 is_len;
    int                 dot_zero;
}                       t_print;

int     ft_printf(const char *format, ...);
void    ft_read_file(t_print *print, va_list arg, char *format);
int     ft_widht(char *format, t_print *print);
int     type_solve(va_list arg, char *format, t_print *print);
int		ft_substr(char *s, unsigned int start, size_t len);
char	*ft_subjoin(char *s1, char *s2, unsigned int s2_start);
char	*ft_strnew(size_t size, t_print *print);
int     ft_strlen(char *s);
void	ft_strdel(char **as);
void    ft_specifier_s(t_print *print, va_list arg);
void    ft_specifier_i_d(t_print *print, va_list arg);
void    ft_specifier_c(t_print *print, va_list arg);
void    ft_init_print(t_print *print);
void    rem_init(t_print *print);
char    *print_i_d(int new, t_print *print);
char    *print_char(char c, t_print *print);
char    *print_string(char *str, t_print *print);
int     ft_precision(char *format, t_print *print);
int     ft_parcer_null(char *format, t_print *print);
int     parser_precision(char *format, int *print);
void	*ft_memset(void *s, int c, int len);
int     len(long int n);
int     input(t_print *print);
char    *ft_format(t_print *print, int c, int *p);
void    format_precision(t_print *print);
char    *ft_format_p(t_print *print, int *p);
void    format_input_spec(t_print *print);
char    *ft_bzero(void *dest, size_t len);
void     ft_atoi(char *str, int *t);
void    format_widht_ch_str(t_print *print);
int     ft_parse_specifier(va_list arg, char *symbol, t_print *print);
void	ft_putstr_len(char *str, size_t len);
char     *ft_print_ud(unsigned int new, t_print *print);
void    ft_specifier_u(t_print *print, va_list arg);
char    *ft_print_upper_x(unsigned int new, t_print *print);
char    *ft_print_lower_x(unsigned int new, t_print *print);
void    ft_specifier_lower_x(t_print *print, va_list arg);
void    ft_specifier_upper_x(t_print *print, va_list arg);
void    format_zero(t_print *print);
int     ft_parser_flag_zero(char *format, t_print *print);
int     ft_parcer_flags(char *format, t_print *print);
char    *ft_print_address(unsigned long new);
void    ft_specifier_p_address(t_print *print, va_list arg);
int		ft_strcmp(char *s1, char *s2);
int     diff_format(t_print *print);
void    format_null(t_print *print);
void    secret_case(t_print *print, char*str);
void    format_null_str(t_print *print);
int     ft_parcer_minus(char *format, t_print *print);
void    format_minus(t_print *print);
int     ft_parcer_widht(char *format, t_print *print);
char    *ft_format_p_u(t_print *print, int *p);
char    *ft_format_p_s(t_print *print, int *p);
char    *ft_format_p_upperx_lowerx(t_print *print, int *p);
char    *ft_format_p_id(t_print *print, int *p);
void    format_widht_num(t_print *print);
void    ft_search(unsigned int new, t_print *print, int *r);


// void* my_malloc(size_t size, const char *file, int line, const char *func);
// void my_free(void *p, const char *file, int line, const char *func);
// #define malloc(X) my_malloc( X, __FILE__, __LINE__, __FUNCTION__)
// #define free(X) my_free(X, __FILE__, __LINE__, __FUNCTION__)

#endif