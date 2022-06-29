#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * struct dog - name age and owner of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
