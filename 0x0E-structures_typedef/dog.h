#ifndef _DOG_H_
#define _DOG_H_

/**
  *struct dog - Define a new type struct dog
  *@name: struct member 1
  *@age: struct member 2
  *@owner: struct member 3
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
