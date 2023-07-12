#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int k[n], f[n];

	for(int i = 0; i < n; i++)
		scanf("%d", &k[i]);

	for(int i = 0; i < n; i++) scanf("%d", &f[i]);

	float max = k[0] * ((float) f[0] / 100);
	int max_i = 1;

	for (int i = 1; i < n; i++){
		float value = k[i] * ((float) f[i] / 100);
//		printf("max = %f, daromad = %f\n", max, value);
		if(max < value){
			max = value;
			max_i = i + 1;
		}
	}
	printf("%d", max_i);
	return 0;
}
