#include "main.h"

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');  /* output: 0 */
	r = _islower('o');
	_putchar(r + '0');  /* output: 1 */
	r = _islower(108);
	_putchar(r + '0');  /* output: 1 */
	_putchar('\n');

	return (0);
}
