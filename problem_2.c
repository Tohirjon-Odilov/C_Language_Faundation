#include <stdio.h>

int main()
{
	int x = 1, y = 0;
	while (y < 10)
		y = 3 * x++ + 1;
	printf("x=%i\ty=%d\n", x,y);

	return 0;
}
