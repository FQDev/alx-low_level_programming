#ifndef MAIN_H
#define MAIN_H
/**
 * File main.h
 *
 */
 
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);

#endif
