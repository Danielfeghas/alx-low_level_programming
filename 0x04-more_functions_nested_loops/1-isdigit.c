#include "main.h"

/**
 * _isdigit - a funtion that checks for a digit (0 through 9)
 *
 * @c: An input integer
 *
 * Return: Always return 0
 */
int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; 1 <= '9'; i++)
	{
		if (1 == c)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
