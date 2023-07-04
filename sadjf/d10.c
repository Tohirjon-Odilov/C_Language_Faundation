#include <stdio.h> 
void Num(int a,int m,int i){
  while(a>i){
    if(a%i==0){
	m+=i;
    }
    i++;
  }
  if(m==a){
	printf("1");
  }
  else{
	printf("0");
  }
}

int main(){
	int a,m=0,i=1;
	scanf("%d",&a);
	Num(a,m,i);
	return 0;
}
