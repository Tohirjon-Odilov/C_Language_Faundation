#include <stdio.h>

int Ekub(int a, int b){
    if(b == 0) {
            return a;
    }
    else {
        return Ekub(b, a % b);
    }
}

int main()
{
	int a,b;
	scanf("%d %d", &a, &b);

	printf("%d",Ekub(a,b));

	return 0;
}
