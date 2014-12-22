#include <stdio.h>

int main()
{
    int a=0;
    scanf("%d",&a); 
    if(a<1 || a>100)
    {}
    else if(a==2)
{
	printf("NO");
}
    else{
    if(a%2==0)
    {
	printf("YES");
    }
    else
    {
	printf("NO");
    }
  }
return 0;
}
