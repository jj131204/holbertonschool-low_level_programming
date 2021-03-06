#ifndef _HOLBERTONH
#define _HOLBERTONH



int _putchar(char c);
char *_memset(char *s, char b, unsigned int n); /*punto0*/
char *_memcpy(char *dest, char *src, unsigned int n); /*punto1*/
char *_strchr(char *s, char c); /*punto2*/
unsigned int _strspn(char *s, char *accept); /*punto3*/
char *_strpbrk(char *s, char *accept); /*punto4*/
char *_strstr(char *haystack, char *needle); /*punto5*/
void print_chessboard(char (*a)[8]); /*punto6*/
void print_diagsums(int *a, int size); /*punto7*/
void set_string(char **s, char *to); /*punto8*/

#endif
