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
/**
 * dog_t - New type
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void free_dog(dog_t *d);
#endif
