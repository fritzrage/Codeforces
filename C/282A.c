#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	int i = 0, statements, x = 0;
	scanf("%d", &statements);
	for (i = 0; i < statements; i++)
	{
		char stmnt[4];
		scanf("%3s", &stmnt);
		while (strcmp(stmnt, "--X") == 0)
		{
			x--;
			break;
		}
		while (strcmp(stmnt, "X--") == 0)
		{
			x--;
			break;
		}
		while (strcmp(stmnt, "++X") == 0)
		{
			x++;
			break;
		}
		while (strcmp(stmnt, "X++") == 0)
		{
			x++;
			break;
		}
	}
	printf("%d", x);
	return 0;
}
