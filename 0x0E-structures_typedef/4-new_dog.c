
#include "dog.h"
#include <stdlib.h>

int _strnlen(char *s);
char *_strncopy(char *s1, char *s2);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strnlen - Gets strn length.
 * @s: String checked.
 *
 * Return: The length.
 */
int _strnlen(char *s)
{
int len = 0;
while (*s++)
len++;
return (len);
}
/**
 * _strncopy - Copies a string .
 * @s1: Destination.
 * @s2: String source.
 *
 * Return: The pointer to s1.
 */
char *_strncopy(char *s1, char *s2)
{
int i = 0;
/*itterate through the string*/
for (i = 0; s2[i]; i++)
s1[i] = s2[i];
s1[i] = '\0';
return (s1);
}
/**
 * new_dog - New dog to be created.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dogs owner.
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *perro;
/*check if empty*/
if (name == NULL || age < 0 || owner == NULL)
return (NULL);
/*Allocate perro to size of dog_t using malloc*/
perro = malloc(sizeof(dog_t));
if (perro == NULL)
return (NULL);
perro->name = malloc(sizeof(char) * (_strnlen(name) + 1));
if (perro->name == NULL)
{
free(perro);
return (NULL);
}
perro->owner = malloc(sizeof(char) * (_strnlen(owner) + 1));
if (perro->owner == NULL)
{
free(perro->name);
free(perro);
return (NULL);
}
perro->name = _strncopy(perro->name, name);
perro->age = age;
perro->owner = _strncopy(perro->owner, owner);
return (perro);
}
