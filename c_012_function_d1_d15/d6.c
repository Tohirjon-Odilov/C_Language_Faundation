#include <stdio.h>

void num(int a,int b){
  if(a>b){
	for(int i=a;i>b;i--){
		printf("%d ",i);
	}
  }
  else{
	for(int i=b-1;i>=a;i--){
		printf("%d ",i);
	}
  }
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	num(a,b);
	return 0;
}
