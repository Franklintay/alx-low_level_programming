#ifndef HEADER_1_H
#define HEADER_1_H
/**
 * struct dog - Define a new type struct dog with the following elements
 * @name: name of type
 * @age: age of type
 * @owner: owner of type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
