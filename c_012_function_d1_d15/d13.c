#include <stdio.h>
void num(int a){
  for(int i=1;a>=i;i++){
	for(int f=1;f<=10;f++){
		printf("%d*%d=%d\n",i,f,i*f);
	  if(f==10)
		printf("\n");
        }
  }
}

int main(){
        int a;
	scanf("%d",&a);
	num(a);
	return 0;
}
