#include <stdio.h>
#include <stdlib.h>

int count = 0;

void fill_nums(int n, char nums[][n], int user_x){
//	system("clear");
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
bool check_list(int user_x, int nums[]){
	int border[9] = {0,1,2,10,11,12,20,21,22};
	for(int i = 0; i < 9; i++){
		if(nums[i] != user_x)
			if(border[i] == user_x)
				return true;
		else return false;
	}

	return false;
}
int add_nums(int user_x, int nums[], int n, char user[][n]){
	static int count = 0;
	for(int i = 0; i < 9; i++){
		if(check_list(user_x,nums)){
			nums[i] = user_x;
			count = fill_nums(n,user,user_x);
		}
	}
	return count;
}
int main()
{
	int n = 3;
	char user[n][n];
	int nums[9];

	int user_x = -1;
	fill_nums(n,user,user_x);

	for(int i = 0; count != 9; i++){
		scanf("%d", &user_x);
		user_x;
		count = add_nums(user_x,n,user,user_x);
	}

	return 0;
}

