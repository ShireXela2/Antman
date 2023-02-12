/*
** EPITECH PROJECT, 2022
** Day07
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

////////////
// MACROS //
////////////

    #define NULL        ((void *)0)
    #define ABS(v)      (v) < 0 ? ((v) * -1) : (v)
    #define POWER(v, p) my_compute_power_rec(v, p)
    #define SQRT(v)     my_compute_square_root(v)

    #define BASE_2      "01"
    #define BASE_8      "01234567"
    #define BASE_10     "0123456789"
    #define BASE_16_UP  "0123456789ABCDEF"
    #define BASE_16_LOW "0123456789abcdef"

/////////////////////
// HEADERS INCLUDE //
/////////////////////

    #include <stdarg.h>

//////////////
// TYPEDEFS //
//////////////

typedef unsigned int uint_t;
typedef long long ll_t;

typedef enum boolean {
    FALSE,
    TRUE
} bool_t;

//////////////////
// LINKED LISTS //
//////////////////

typedef struct list {
    void *data;
    struct list *next;
    struct list *previous;
} list_t;

void swap_list(list_t **src, list_t **dest);
void swap_elements(list_t *first_element, list_t *second_element);
void element_destroy(list_t **element, void destroy_ptr(void *));
void list_destroy(list_t *list, void destroy_ptr(void *));
int list_len(list_t *list);
list_t *list_create(void);
list_t *element_create(void *data);
list_t *element_create_to_list_end(list_t *list, void *data);
list_t *element_create_to_list_start(list_t *list, void *data);
list_t *list_end(list_t *list);
list_t *list_start(list_t *list);

///////////////
// FUNCTIONS //
///////////////

void my_putchar(char c);
void my_swap(int *a, int *b);
void my_sort_int_array(int *array, int size);
void e_flag(double nb, unsigned int precision, int *printed);
void f_flag(double nb, unsigned int precision, int *printed);
void g_flag(double nb, unsigned int precision, int *printed);
void get_flags(char const *format, int i, va_list *args, int *printed);
void my_free_array(char **arr);
void my_show_word_array(char * const *tab);
int my_isneg(int n);
int my_nblen(int nb);
int print_nb(int nb);
int my_put_nbr(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int my_compute_square_root(int nb);
int get_max(int a, int b);
int get_min(int a, int b);
int my_compute_power_rec(int nb, int p);
int round_number(double nb);
int print_char(char c);
int my_puterror(char *str);
int my_getnbr(char const *nbr);
int my_putstr(char const *str);
int print_str(char const *str);
int my_str_isnum(char const *str);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int print_file(char const *filepath);
int my_str_isprintable(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
int my_printf(const char *__restrict__ format, ...);
int my_arraylen(char * const *array);
unsigned int my_strlen(char const *str);
float get_fmax(float a, float b);
float get_fmin(float a, float b);
char *convert_base(long long nb, char *base);
char *my_revstr(char *str);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strdup(char const *src);
char *my_strcapitalize(char *str);
char *get_file_content(char const *filepath);
char *my_strstr(char *str, char *to_find);
char *my_strcpy(char *dest, char const *src);
char *my_strcat(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strncat(char *dest, char const *src, int nb);
char **my_str_to_word_array(char const *str);
char **my_malloc_array(int rows, int columns);
char **my_str_to_array(char const *str, char separator);
bool_t is_base_conversion_specifier(char flag);
bool_t print_convert_base(va_list *args, char const flag, int *printed);

#endif /* !MY_H_ */
