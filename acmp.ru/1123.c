#include <stdio.h>

int main()
{
	int x1,x2,y1,y2;
	scanf("%d %d %d %d", &x1,&y1,&x2,&y2);

	if(x1+2 == x2 || x1-2 == x2 || y1+2 == y2 || y1 - 2 == y2)printf("YES");
	else printf("NO");

	return 0;
}
