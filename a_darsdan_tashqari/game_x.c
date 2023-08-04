#include <stdio.h>
#include <stdlib.h>

void fill_nums(int n, char nums[][n]){
//	system("clear");
	puts("\n     |     |");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			nums[i][j] = '#';
			printf("%3c  %c", nums[i][j], j!=2?'|':' ');
		}
		if(i!=2)
		puts("\n-----|-----|-----");
	}
	puts("\n     |     |\n");
}

void move_nums(){
	printf("Game over");
}

int main()
{
	int n = 3;
	char nums[n][n];

	fill_nums(n,nums);
	move_nums();
	return 0;
}
