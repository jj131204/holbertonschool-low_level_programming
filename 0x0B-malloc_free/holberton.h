#ifndef FILE_HOLBERTON
#define FILE_HOLBERTON

char *create_array(unsigned int size, char c); /*punto0*/
char *_strdup(char *str);/*punto1*/
char *str_concat(char *s1, char *s2); /*punto2*/
int **alloc_grid(int width, int height); /*punto3*/
void free_grid(int **grid, int height); /*punto4*/
char *argstostr(int ac, char **av); /*punto5*/
char **strtow(char *str); /*avanzado*/

#endif
