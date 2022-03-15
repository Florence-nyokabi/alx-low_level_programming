#include <main.h>
/** main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char *int = "putchar";
	
	while (*int)
	{
		_putchar(*int);
	}
	_putchar('\n');
	return (0);
}
