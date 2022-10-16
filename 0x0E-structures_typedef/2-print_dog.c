#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	struct dog *d;

	*d = ("Poppy", 3.5, "Bob");
	if (*d == NULL)
		return (1);
	printf("Name:  %s", d->name);
	printf("Age: %.2f", d->age);
	printf("Owner: %s", d->owner);
	return (0);
}

