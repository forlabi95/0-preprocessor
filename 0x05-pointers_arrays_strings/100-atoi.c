#include "main.h"

/**
* _atoi - Convert a string to an integer.
* @s: pointer to string to be converted.
* Return: The converted integer value.
*/

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int i = 0;

while (s[i] != '\0')
{
	if (s[i] == '-')
	{
		sign *= -1;
	}
	else if (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
	}
	else if (num > 0)
	{
		break;
	}
	i++;
	}

	return (sign * num);
}
