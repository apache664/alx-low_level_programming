
#ifndef DOG_H
#define DOG_H

/**
  * struct dog - the dog attributes
  * @name: the name of the dog.
  * @age: the age of the dog.
  * @owner: the owner of the dog.
  *
  * description: the attributes of a dog.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - the typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*struct dog*/
