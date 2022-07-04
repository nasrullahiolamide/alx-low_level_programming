#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Detail of a Dog
 * @name: Pointer to the char array of name
 * @age: Age of the dog
 * @owner: Pointer to the char array of owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
