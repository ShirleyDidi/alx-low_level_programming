#include <stdlib.h>
#include "dog.h"
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
* new_dog - attributes dog's structure
* @name: name of a dog
* @age: age of a dog
* @owner: the dog's owner
* Return: nothing
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *max_dog;
int name_l = 0, own_l = 0;
if (name != NULL && owner != NULL)
{
name_l = _strlen(name) + 1;
own_l = _strlen(owner) + 1;
max_dog = malloc(sizeof(dog_t));
if (max_dog == NULL)
return (NULL);
max_dog->name = malloc(sizeof(char) * name_l);
if (max_dog->name == NULL)
free(max_dog);
return (NULL);
}
max_dog->owner = malloc(sizeof(char * owl_l);
if (max_dog->owner == NULL)
{
free(max_dog->name);
free(max_dog);
return (NULL);
}
max_dog->name = _strcpy(max_dog->name, name);
max_dog->owner = _strcpy(max_dog->owner, owner);
max_dog->age = age;
return (max_dog);
}
/**
* _strlen - returns the length of string
* @s: string to count
* Return: string length
*/
int _strlen(char *s)
{
int c = 0;
for (; *s != '\0'; s++)
{
c++;
}
return (c);
}
/**
* _strcpy - copy a string
* @dest: destination value
* @src: source value
* Return: the pointer dest
*/
char *_strcpy(char *dest, char *src)
{
int s;
for (s = 0; src[s] != '\0'; s++)
{
dest[s] = src[s];
}
dest[s++] = '\0';
return (dest);
}
 
