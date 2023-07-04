#include <stdio.h> 

void num(int a){
	for(int i=1;a>=i;a--){
		printf("%d ",a);
	}
}

int main(){
	int a;
	printf("son kiriting");
	scanf("%d",&a);
 	num(a); 
	return 0;
}
