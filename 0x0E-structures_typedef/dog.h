#ifndef _dog_
#define _dog_

/**
 * struct dog- a structure for dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: returns none
 */

struct dog
{
char *name;
float age;
char *owner;
};

#endif


/**
 * typedef dot_t- new nick name
 *
 *Return: none
 *
 */

typedef struct dog dog_t;

void init_dog(dog *d, char *name, float age, char *owner);
void print_dog(struct dog *name);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d)

#endif
