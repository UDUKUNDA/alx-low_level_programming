#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog attributes
 * @name: its name
 * @age: the age
 * @owner: the dog owner
 *
 * Description: I don't have any longer description
 */
typedef struct dog_t
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
