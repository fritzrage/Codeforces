#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
int main()
{
	int rows, columns, output;
	scanf("%d %d", &rows, &columns);

	if (rows % 2 == 0)
	{
		output = (rows / 2)*columns;
	}
	else if (columns % 2 == 0)
	{
		output = (columns / 2)*rows;
	}
	else
	{		
		output = (((columns - 1) / 2)*rows) + (rows/2);
	}

	printf("%d",output);
	return 0;
}
