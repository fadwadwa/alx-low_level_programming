#ifndef DOG
#define DOG
/**
 * struct dog - infos of the cute dog
 * @name: name of the dog
 * @age: his/her age
 * @owner: his/her owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
