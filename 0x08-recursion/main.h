main.h
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int wildcmp(char *s1, char *s2);

#endif /* MAIN_H */

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-wildcmp.c -o 101-wildcmp

git add .
git commit -m 'Task 8 0x08. C - Recursion'
git push 

#ifndef MAIN_H
#define MAIN_H

/* function prototypes */
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int sqrt_helper(int n, int i);
int is_prime_number(int n);
int is_prime_helper(int n, int i);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);
int _putchar(char c);

#endif /* MAIN_H */
