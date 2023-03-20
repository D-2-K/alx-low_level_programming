#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct dog
 * @name: name
 * @age: age
 * @owner: owner
 * Description: This struct provides a dog details
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_a;
void init_dog(struct dog *x, char *name, float age, char *owner);
void print_dog(struct dog *x);
dog_a *new_dog(char *name, float age, char *owner);
void free_dog(dog_a *x);

#endif /*DOG_H*/
