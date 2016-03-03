#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

int main()
{
	int stops;
	scanf("%d", &stops);
	int i = 0;
	int getIn, getOut, insideTram = 0, maxInTram = 0;
	for (i = 0; i < stops; i++)
	{		
		scanf("%d %d", &getIn, &getOut);
		insideTram = insideTram + getOut - getIn;
		if (maxInTram < insideTram)
		{
			maxInTram = insideTram;
		}	
	}
	printf("%d", maxInTram);
	return 0;
}
