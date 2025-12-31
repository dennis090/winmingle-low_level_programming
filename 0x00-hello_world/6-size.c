#include <stdio.h>
/*Author: okoh dennis onoja
 * Program: winmingle community training on c 
 * Description: c code that output size of various data type
 * */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu bytes(s) \n", sizeof(int));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n",sizeof(float));
	return (0);
}
