#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Describes dog
 * @name: Name
 * @age: It's age
 * @owner: It's owner
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
