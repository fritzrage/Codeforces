#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	int i = 0, groups, noOfTaxis = 0, groupsOf2 = 0, groupsOf1 = 0, groupsOf3 = 0, groupsOf4 = 0;
	scanf("%d", &groups);
	for (i = 0; i < groups; i++)
	{
		int studsInGroup;
		scanf("%d", &studsInGroup);
		if (studsInGroup == 4)
		{
			groupsOf4++;
		}
		else if (studsInGroup == 3)
		{
			groupsOf3++;
		}
		else if (studsInGroup == 2)
		{
			groupsOf2++;
		}
		else if (studsInGroup == 1)
		{
			groupsOf1++;
		}
	}

	while(groupsOf3 > 0 && groupsOf1 > 0)
	{
		noOfTaxis++;
		groupsOf3--;
		groupsOf1--;
	}

	while (groupsOf2 > 1)
	{
		noOfTaxis++;
		groupsOf2 = groupsOf2 - 2;
	}

	while (groupsOf2 > 0 && groupsOf1 > 1)
	{
		noOfTaxis++;
		groupsOf2--;
		groupsOf1 = groupsOf1 - 2;
	}

	while (groupsOf2 > 0 && groupsOf1 > 0)
	{
		noOfTaxis++;
		groupsOf2--;
		groupsOf1--;
	}

	while (groupsOf1 > 3)
	{
		noOfTaxis++;
		groupsOf1 = groupsOf1 - 4;
	}

	while (groupsOf1>0 && groupsOf1 <= 3)
	{
		noOfTaxis++;
		groupsOf1 = 0;
	}


	noOfTaxis = noOfTaxis + groupsOf4 + groupsOf1 + groupsOf2 + groupsOf3;

	printf("%d", noOfTaxis);
	return 0;
}
