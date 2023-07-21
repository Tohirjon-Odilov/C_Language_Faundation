#include <stdio.h>

int main()
{
	int x1,x2,y2,y1;
	scanf("%d %d %d %d", &x1,&y1,&x2,&y2);

	if((x1+x2+y1+y2)%2)printf("NO");
	else if ((x1+x2+y1+y2)%2==0)printf("YES");

	return 0;
}
