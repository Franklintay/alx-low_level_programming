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

/**
 * gog_t - a new name for the type struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
