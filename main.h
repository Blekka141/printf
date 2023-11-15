#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int process_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

/* FUNCTIONS */

/* Funtions to print chars and strings */
int print_character(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_strings(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_percentage(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Functions to print numbers */
int print_integer(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_binary_(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_octals(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hex(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hex_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_hexa(va_list types, char map_to[],
char buffer[], int flags, char flag_ch, int width, int precision, int size);

/* Function to print non printable characters */
int print_non_printables(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Funcion to print memory address */
int print_pointers(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Funciotns to handle other specifiers */
int process_flags(const char *format, int *i);
int process_width(const char *format, int *i, va_list list);
int process_precision(const char *format, int *i, va_list list);
int process_size(const char *format, int *i);

/*Function to print string in reverse*/
int print_reversed(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*Function to print a string in rot 13*/
int print_rot13strings(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* width handler */
int handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int size);
int write_numbers(int is_positive, int ind, char buffer[],
	int flags, int width, int precision, int size);
int write_num_buff(int ind, char bff[], int flags, int width, int precision,
	int length, char padd, char extra_c);
int write_pointer_mem(char buffer[], int ind, int length,
	int width, int flags, char padd, char extra_c, int padd_start);

int write_unsigned(int is_negative, int ind,
char buffer[],
	int flags, int width, int precision, int size);

/* SERVICES */
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

#endif /* MAIN_H */
