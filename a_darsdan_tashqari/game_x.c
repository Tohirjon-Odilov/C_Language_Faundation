#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int fill_nums(int n, char nums[][n], int user_x[]){
//	system("clear");
	static int count = 0;
//	int row, col;
//	if(user_x[0] != -1){
//		row = user_x / 10;
//		col = er_x % 10;
//	}
	puts("\n     |     |");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == user_x[i] && user_x[i] == j)
				nums[user_x[i][i] = 'X';
			else nums[i][j] = '#';
			printf("%3c  %c", nums[i][j], j!=2?'|':' ');
		}
		if(i!=2)
		puts("\n-----|-----|-----");
	}
	puts("\n     |     |\n");
	return count++;
}

void move_nums(int n, char nums[][n], int user_x[i]){
//	int col = user_x / 10;
//	int row = user_x % 10;

	puts("\n     |     |");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == user_x[i]%10 && user_x[i]/10 == j)
				nums[row][col] = 'x';
			else nums[i][j] = '#';
			printf("%3c  %c", nums[i][j], j!=2?'|':' ');
		}
		if(i!=2)
		puts("\n-----|-----|-----");
	}
	puts("\n     |     |\n");
}

bool check_list(int user_x[], int nums[]){
	int border[9] = {0,1,2,10,11,12,20,21,22};
	for(int i = 0; i < 9; i++){
		if(nums[i] != user_x[i])
			if(border[i] == user_x[i])
				return true;
		else return false;
	}

	return false;
}

int add_nums(int user_x[], int nums[], int user[][n], int n){
	for(int i = 0; i < 9; i++){
		if(check_list(user_x[i],nums)){
			nums[i] = user_x[i];
			count = fill_nums(n,user,user_x[i]);
		}
	}
	return count;
}

int main()
{
	int n = 3;
	char user[n][n] = {};
	int nums[9];

	int user_x[9] = {};
	fill_nums(n,user,user_x);

	for(int i = 0, count = 0; count != 9; i++){
		scanf("%d", &user_x[i]);
		count = add_nums(user_x[i],nums,user,n);
//		count = fill_nums(n,user,user_x);
//		for(int j = 0; j <= i; j++)
//		printf("%d ", nums[j]);
//		puts("");
	}

//	move_nums(n, nums, user_x);

	return 0;
}
