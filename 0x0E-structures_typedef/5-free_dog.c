#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees memory allocated to dog.
 * @d: The dog checked.
 */
void free_dog(dog_t *d)
{
/*checks if empty*/
if (d == NULL)
return;
/*owner's copy and name stay in memory*/
free((*d).owner);
free((*d).name);
free(d);
}
