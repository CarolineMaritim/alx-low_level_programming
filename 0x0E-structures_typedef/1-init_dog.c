#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Sets a variable of type struct dog.
 * @d: The struct variable.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
/*checks if empty*/
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
