#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	char teamPosition[100];
	int is0 = 0, is1 = 0;
	scanf("%s", &teamPosition);
	int i = 0;
	while (teamPosition[i] != '\0')
	{
		if (teamPosition[i] == '0')
		{
			is0++;
			is1 = 0;
		}
		else
		{
			is1++;
			is0 = 0;
		}		
		if (is0 == 7 || is1 == 7)
		{
			break;
		}
		i++;
	}
	if (is0 == 7 || is1 == 7)
	{
		printf("%s", "YES");
	}
	else
	{
		printf("%s", "NO");
	}
	
	return 0;
}
