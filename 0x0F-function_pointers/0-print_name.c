#include "function_pointers.h"

/**
*print_name - it's passed parameter through function pointer
 * @name: name of the person
 * @f: name function pointer
*
*/

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;		

	f(name);
}
