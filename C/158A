#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	int noInputs = 0, basePlace = 0;
	scanf("%d %d", &noInputs, &basePlace);
	int i = 0;
	int marks[49];
	int passingStudents = 0;
	for (i = 0; i < noInputs; i++)
	{
		scanf("%d", &marks[i]);
	}
	if (marks[basePlace - 1] == 0)
	{
		for (i = 0; i < noInputs; i++)
		{
			if (marks[i] > marks[basePlace - 1])
			{
				passingStudents++;
			}
		}
	}
	else
	{
		for (i = 0; i < noInputs; i++)
		{


			if (marks[i] >= marks[basePlace - 1])
			{
				passingStudents++;
			}
		}
	}
	
	
	
	printf("%d", passingStudents);
	return 0;
}
