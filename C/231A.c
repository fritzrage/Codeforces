#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
int main()
{
	int i = 0, problems,solvedProblems=0;
	scanf("%d", &problems);
	for (i = 0; i < problems; i++)
	{
		int petya, vasya, tonya;
		scanf("%d %d %d", &petya, &vasya, &tonya);
		if (petya + tonya + vasya >= 2)
		{
			solvedProblems++;
		}
	}
	

	printf("%d", solvedProblems);
	return 0;
}
