#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * main - the main function
 * Return: 0;
 */
int main(void)
{
	srand(time(NULL)); /*Seed the random number generator*/

	char password[PASSWORD_LENGTH + 1]; /*+1 for null terminator*/

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		/* Generate a random number from 0-61*/
		int random_num = rand() % 62;

		/*If the number is less than 26, use an uppercase letter*/
		if (random_num < 26)
			password[i] = 'A' + random_num;
		/*If the number is less than 52, use a lowercase letter*/
		else if (random_num < 52)
			password[i] = 'a' + (random_num - 26);
		/*Otherwise, use a digit*/
		else
			password[i] = '0' + (random_num - 52);
	}
	/*Add null terminator to the end of the string*/
	password[PASSWORD_LENGTH] = '\0';
	printf("Generated Password: %s\n", password);
	return (0);
}
