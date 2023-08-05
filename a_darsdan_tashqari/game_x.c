#include <stdio.h>
#include <stdlib.h>

int fill_nums(int n, char nums[][n], int user_x){
//	system("clear");
	static int count = 0;
	int row, col;
	if(user_x != -1){
		row = user_x / 10;
		col = user_x % 10;
	}
	puts("\n     |     |");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == row && col == j && user_x != -1)
				nums[row][col] = 'X';
			else nums[i][j] = '#';
			printf("%3c  %c", nums[i][j], j!=2?'|':' ');
		}
		if(i!=2)
		puts("\n-----|-----|-----");
	}
	puts("\n     |     |\n");
	return count++;
}

void move_nums(int n, char nums[][n], int user_x){
	int col = user_x / 10;
	int row = user_x % 10;

	puts("\n     |     |");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == row && col == j)
				nums[row][col] = 'x';
			else nums[i][j] = '#';
			printf("%3c  %c", nums[i][j], j!=2?'|':' ');
		}
		if(i!=2)
		puts("\n-----|-----|-----");
	}
	puts("\n     |     |\n");
}

int main()
{
	int n = 3;
	char user[n][n];
	int nums[9];

	int user_x = -1;
	fill_nums(n,user,user_x);

	for(int i = 0, count = 0; count != 9; i++){
		scanf("%d", &user_x);
		nums[i] = user_x;
		count = fill_nums(n,user,user_x);
		for(int j = 0; j <= i; j++)
		printf("%d ", nums[j]);
		puts("");
	}
//	move_nums(n, nums, user_x);

	return 0;
}
