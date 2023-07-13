#include <stdio.h>
/**
* main - program that prints the size of various types on the computer.
*
*Return: 0 (Success)
*/
int main(void)
{
int size_of_int = sizeof(int);
int size_of_char = sizeof(char);
int size_of_longInt = sizeof(long int);
int size_of_longlongInt = sizeof(long long int);
int size_of_float = sizeof(float);

printf("Size of a char: %d byte(s)\n", size_of_char);
printf("Size of an int: %d byte(s)\n", size_of_int);
printf("Size of a long int: %d byte(s)\n", size_of_longInt);
printf("Size of a long long int:%d byte(s)\n", size_of_longlongInt);
printf("Size of a float: %d byte(s)\n", size_of_float);
return (0);
}
