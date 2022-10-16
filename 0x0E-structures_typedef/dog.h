#ifndef _DOG_H_
#define _DOG_H_
#include <stdio.h>

/**
	* struct dog - has the information about a dog
	* @name: the dog name
	* @age: its age
	* @owner: the name of its owner
	*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
#endif /*_DOG_H_*/
