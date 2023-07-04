#include <stdio.h>

void num(int a){
  for(int i=1;i<a;i++){
	if(i%2==0){
		printf("%d ",i);
	}
  }
  printf("\n");
  for(int i=a;i>=1;i--){
	if(i%2!=0){
		printf("%d ",i);
  	}
  }
	printf("\n");
}

int main(){
	int a;
	scanf("%d",&a);
	num(a);
	return 0;
}
