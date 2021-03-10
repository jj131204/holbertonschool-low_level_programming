#include "function_pointers.h"
#include <stdio.h>
/**
*print_name - it's passed parameter through function pointer
 * @name: name of the person
 * @f: name function pointer
*
*/

void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;		

	if (!name)
		return;
	f(name);
}
