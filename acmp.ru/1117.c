#include <stdio.h>

int main()
{
	int n;
	int sum = 0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		sum += 45;
		if(i % 2)
			sum += 5;
		if(!(i % 2))
			sum += 15;
	}
	if(n % 2)
		sum -= 5;
	else
		sum -= 15;
	printf("%d %d", sum/60+9, sum % 60);

	return 0;
}
