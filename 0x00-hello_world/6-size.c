#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	printf("size of char: %li byte(s)\n", sizeof(char));
	printf("size of an int: %ld byte(s)\n", sizeof(int));
	printf("size of a long int: %li byte(s)\n", sizeof(long int));
printf("size of long long int: %ld byte(s)\n", sizeof(long long int));
printf("size of a float: %li byte(s)\n", sizeof(float));
return (0);
}
