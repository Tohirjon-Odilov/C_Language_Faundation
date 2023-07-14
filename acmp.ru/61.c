#include <stdio.h>
 
int main()
{
    int a,b,t = 0, r = 0;
 
    for(int i = 0; i < 4; i++){
        scanf("%d %d", &a, &b);
        t += a;
        r += b;
    }
 
    if(t > r)
		printf("1");
    if(t < r)
		printf("2");
    if (t == r)
		printf("DRAW");
 
    return 0;
}
