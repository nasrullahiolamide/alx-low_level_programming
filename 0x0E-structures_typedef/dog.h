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

/**
 * typedef dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);



#endif /* DOG_H */
