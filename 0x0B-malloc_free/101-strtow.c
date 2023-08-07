#include "main.h"
#include <stdlib.h>
int wordlen(char *str);
int wordcount(char *str);
char **strtow(char *str);
/**
 * wordlen - Locates the index in a string.
 * @str: The string Checked.
 *
 * Return: The index.
 */
int wordlen(char *str)
{
int index = 0, len = 0;
while (*(str + index) && *(str + index) != ' ')
{
len++;
index++;
}
return (len);
}
/**
 * wordcount - Counts the words in a string.
 * @str: The string Checked.
 *
 * Return: The number of words.
 */
int wordcount(char *str)
{
int index = 0, words = 0, len = 0;
/*calculates number of chars until null termtr*/
for (index = 0; *(str + index); index++)
len++;
/*this loops checks each character*/
for (index = 0; index < len; index++)
{
if (*(str + index) != ' ')
{
/*increment words to indicate it has been found*/
words++;
/*call wordlen() to calculate the len of current word*/
index += wordlen(str + index);
}
}
return (words);
}
/**
 * strtow - Splits a string to words.
 * @str: The string worked on.
 *
 * Return: If str = NULL/ str = ""/ the function fails - NULL.
 *         else - a pointer to words.
 */
char **strtow(char *str)
{
char **strings;
int index = 0, words, w, letters, l;
if (str == NULL || str[0] == '\0')
return (NULL);
words = wordcount(str);
if (words == 0)
return (NULL);
strings = malloc(sizeof(char *) * (words + 1));
if (strings == NULL)
return (NULL);
for (w = 0; w < words; w++)
{
while (str[index] == ' ')
index++;
letters = wordlen(str + index);
strings[w] = malloc(sizeof(char) * (letters + 1));
if (strings[w] == NULL)
{
for (; w >= 0; w--)
free(strings[w]);
free(strings);
return (NULL);
}
for (l = 0; l < letters; l++)
strings[w][l] = str[index++];
strings[w][l] = '\0';
}
strings[w] = NULL;
return (strings);
}
