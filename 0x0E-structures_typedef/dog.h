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


/**
 * typedef dot_t- new nick name
 *
 *Return: none
 *
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif
