#ifndef DOG_H
#define DOG_H
/**
* struct dog - estructure
* @name: Primer miembro
* @age: Segundo miembro
* @owner: tercer miembro
*
* Descripción: Descripción más larga
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif