#include <stdio.h>

int main()
{

	int a, b, c, middle;

	printf("3 ta son kiriting: ");
	scanf("%d %d %d", &a, &b, &c);
	// Method - 1
	/*if(a > b && a > c){
	  if(b > c) middle = b;
	  else middle = c;
	}else if(c > a && c > b){
	  if(a > b) middle = a;
	  else middle = b;
	}else if(b > c && b > a){
	  if(c > a) middle = c;
	  else middle = a;
	}*/

	// Method - 2
	middle = a;
	if (a > b && a > c)
		(b > c) ? (middle = b) : (middle = c);
	else if (c > a && c > b)
		(a > b) ? (middle) = a : (middle = b);
	else if (b > c && b > a)
		(c > a) ? (middle = c) : (middle = a);
	else
	{
		printf("Iltimos son kiriting!?\n");
	}
	printf("O'rtacha son: %d", middle);

	return 0;
}
