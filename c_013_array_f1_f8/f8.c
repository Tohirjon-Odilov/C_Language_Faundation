#include <stdio.h>

int main(){

	int nums[] = {88, 85, 96, 81, 39, 12, 4, 56, 2, 13, 31, 51, 54, 21, 5, 48, 28, 57, 40, 44, 55, 74, 80, 94, 17, 61, 47, 1, 10, 27, 83, 42, 36, 75, 3, 65, 45, 24, 15, 25, 14, 30, 41, 53, 34, 11, 93, 86, 32, 26, 97, 7, 98, 50, 38, 68, 59, 64, 63, 76, 91, 52, 71,43, 35, 18, 79, 87, 29, 58, 78, 22, 95, 49, 99, 67, 89, 69, 62, 9, 33, 6, 82, 8, 70, 84, 77, 37, 72, 46, 16, 23, 73, 92, 60, 66, 90,100, 20};

	int size = sizeof(nums) / sizeof(nums[0]);
	int a;

	for(int i = 0; i < size; ++i){
		for(int j = i + 1; j < size; ++j){
			if(nums[i] > nums[j]){
				a = nums[i];
				nums[i] = nums[j];
				nums[j] = a;
			}
		}
	}
	//100 ham chiqib qolyapti nima sababdan chiqayotganini bilmadim keyin size'dan 1ni ayrib to'g'irladim shunda faqat 18 chiqyapti va unga 1 qo'shib 19 qilib qo'ydim.
	for(int j = 0; j < size-1; j++){
		if(nums[j] != nums[j+1]-1){
			printf("%d ", nums[j]+1);
		}
	}

	return 0;
}
