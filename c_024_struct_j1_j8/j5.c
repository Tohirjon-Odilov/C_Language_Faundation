#include <stdio.h>
#include <string.h>

typedef struct talaba {
	char name_of_student[32];
	int age_of_student;
	int course_of_student;
	int scholorship_of_student;

} TALABA;

TALABA add_student(){
	TALABA new;
	printf("ENTER NAME OF STUDENT: "); scanf("%s", new.name_of_student);
	printf("ENTER AGE OF STUDENT: "); scanf("%d", &new.age_of_student);
	printf("ENTER COURSE OF STUDENT: "); scanf("%d", &new.course_of_student);
	printf("ENTER SCHOLORSHIP OF STUDENT: "); scanf("%d", &new.scholorship_of_student);
	puts("");

	return new;
}

void print_student(TALABA student){
	printf("\nNAME OF STUDENT: %s\n", student.name_of_student);
	printf("AGE OF STUDENT: %d\n", student.age_of_student);
	printf("COURSE OF STUDENT: %d\n", student.course_of_student);
	printf("SCHOLORSHIP OF STUDENT: %d\n\n", student.scholorship_of_student);
}

void filter_student(TALABA student){
	int n = strlen(student.name_of_student);

	if(student.name_of_student[n-1] == 'a')
		print_student(student);
}

int main()
{
	int n;
	printf("ENTER NUMBER OF STUDENT: ");scanf("%d", &n);
	TALABA number_of_student[n];

	for(int i = 0; i < n; i++){
		printf("ENTER %d - STUDENT:\n", i+1);
		number_of_student[i] = add_student();
	}
	puts("=============Filter=================");
	for(int i = 0; i < n; i++){
		filter_student(number_of_student[i]);
	}

	return 0;
}
