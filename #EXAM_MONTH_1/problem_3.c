#include <stdio.h>
#include <math.h>

void power(long number, long *two, long *three, long *four){
	*two = pow(number, 2);
	*three = pow(number, 3);
	*four = pow(number, 4);
}

int main()
{
	long number;
	printf("Enter number: "); scanf("%li", &number);

	long two, three, four;

	power(number, &two, &three, &four);

	printf("%li %li %li", two, three, four);

	return 0;
}
