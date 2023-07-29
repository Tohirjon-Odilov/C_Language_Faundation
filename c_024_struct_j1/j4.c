#include <stdio.h>

typedef struct talaba{
	char name[32];
	int age;
	int course;
	int scholorship;
} TALABA;

TALABA add_student(){
	TALABA new;

	printf("ENTER NAME OF STUDENT: "); scanf("%s", new.name);
	printf("ENTER AGE OF STUDENT: "); scanf("%d", &new.age);
	printf("ENTER COURSE OF STUDENT: "); scanf("%d", &new.course);
	printf("ENTER SCHOLORSHIP OF STUDENT: "); scanf("%d",&new.scholorship);
	puts("");

	return new;
}

void print_student(TALABA student){
	printf("\nName of student: %s\n", student.name);
	printf("Age of student: %d\n", student.age);
	printf("Course of student: %d\n", student.course);
	printf("Scholorship of student: %d\n", student.scholorship);
}

void filter_student(TALABA student){
	if(student.name[0] == 'A')
		print_student(student);
}

int main()
{
	int n;
	printf("ENTER NUMBER OF STUDENT: ");scanf("%d", &n);
	TALABA number_of_student[n];

	for(int i = 0; i < n; i++){
		printf("ENTER %d - STUDENT: \n", i+1);
		number_of_student[i] = add_student();
	}

	puts("==========Filter=========");

	for(int i = 0; i < n; i++){
		filter_student(number_of_student[i]);
	}

	return 0;
}
