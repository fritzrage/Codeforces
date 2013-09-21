//1A.c 


*/

#include <stdio.h>
int main()
{
	long long a,b,c,d,e,NoTiles;
	scanf("%lld %lld %lld", &a, &b, &c);

	if (a%c==0)
       d = (a/c);
    else 
        d= (a/c) +1;
    if (b%c==0)
        e = (b/c);
    else
        e = (b/c)+1;
    NoTiles = d*e;
    printf("%lld", NoTiles);
	return 0;
}
