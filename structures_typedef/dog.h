#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog_t - this is a dog structure file
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

struct dog_t
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
