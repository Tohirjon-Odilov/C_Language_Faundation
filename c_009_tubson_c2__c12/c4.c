#include <stdio.h>

int main(){

	int i = 78, num = 112;

	while(i < num){
		if(i % 5 == 0){
			i++;
			continue;
		}
		printf("%d\n", i);
		i++;

	}

	return 0;

}
