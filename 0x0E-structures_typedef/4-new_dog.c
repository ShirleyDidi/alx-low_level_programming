#include <stdlib.h>
#include "dog.h"
/**
* _strlen - returns the length of a string
* @s: string to evaluate
* Return: the length of a string
*/
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
* _strcpy - copies the string pointed to by src
* @dest: pointer to the buffer in which we copy the string
* @src: string to be copied
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
int len = 0;
while (src[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/**
* new_dog - new dog
* @name: name of a dog
* @age: age of a dog
* @owner: the dog's owner
* Return: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
int name_l = 0, own_l = 0;
dog_t *dog;
if (name != NULL && owner != NULL)
{
name_l = _strlen(name) + 1;
own_l = _strlen(owner) + 1;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * name_l);
if (dog->name == NULL)
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (own_l + 1));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
dog->name = _strcpy(dog->name, name);
dog->owner = _strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
