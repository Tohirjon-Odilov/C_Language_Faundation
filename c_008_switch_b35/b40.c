#include <stdio.h>

int main(){

    int num,res;
	int loop = 1;

	start:
    printf("Son kiriting: ");
    scanf("%d", &num);

	res += num;

	if(loop < 5){
		++loop;
		goto start;
	}
	printf("%d", res);

    return 0;
}

