#ifndef _HOLBERTONH
#define _HOLBERTONH

void *malloc_checked(unsigned int b);/*punto 0*/
char *string_nconcat(char *s1, char *s2, unsigned int n);/*punto1*/
void *_calloc(unsigned int nmemb, unsigned int size); /*punto2*/
int *array_range(int min, int max); /*punto3*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size); /*punto 4 (avanzado1) */

#endif
