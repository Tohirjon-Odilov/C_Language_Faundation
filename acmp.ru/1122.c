#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x1,x2,y1,y2;
	scanf("%d %d %d %d", &x1,&y1,&x2,&y2);

	if(abs(x1-x2) <= 1 && abs(y1-y2) <= 1) printf("YES");
	else printf("NO");

	return 0;
}
