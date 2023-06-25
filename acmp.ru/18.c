#include <stdio.h>

int main() {

    int n;
	int sum = 1;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum *= i;
    }
    printf("%lld",(long long)sum);


    return 0;
}
