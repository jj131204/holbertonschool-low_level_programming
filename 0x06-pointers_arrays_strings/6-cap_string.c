#include "holberton.h"

/**
  * string_toupper - changes all lowercase letters of a string to uppercase
  * @s: string
  * Return: pointer to string s
**/

char *cap_string(char *s)
{
int a;
        for (a = 0 ; s[a] != '\0' ; a++)
        {
                if (s[a] >= 'a' && s[a] <= 'z')
                {
                    s[a] = s[a] ;     
			if(s[a] == ' ')
			{
				s[a] = s[a] - 32;
			}
                }
        }
        return (s);
}
