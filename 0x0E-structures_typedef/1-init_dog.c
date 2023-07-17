#include <stdlib.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

struct dog
{char *name;
 float age;
 char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
{if(d == NULL);
  d =malloc (sizeof(struct dog));
  d->name = name;
  d->age = age;
  d->ownwer= owner;
}
