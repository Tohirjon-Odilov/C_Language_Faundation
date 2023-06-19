#include <stdio.h>

int main(){

	int i = 29;

	while(i < 55){
		i++;
		if(i % 6 == 0)
			continue;
		printf("%d\n", i);
	}

}
