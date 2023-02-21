#include "main.h"
int main()
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int cnt, s_z;

	s_z = sizeof(str) / sizeof(int);
	for (cnt = 0; cnt < s_z; cnt++)
	{
		_putchar(str[cnt]);
	}
	_putchar('\n');
	return (0);
}

