#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	int noInputLines = 0;
	scanf("%d", &noInputLines);	
	int i = 0;
	for (i = 0; i < noInputLines; i++)
	{
		char wordToPrint[99];
		scanf("%s",&wordToPrint);
		char current = 'a';
		int length = 0;
		while (current != '\0')
		{
			current = wordToPrint[length];
			length++;
		}

		length = length - 2;
		if (length < 10)
		{
			printf("%s\n", wordToPrint);
		}
		else
		{	
			printf("%c%d%c\n", wordToPrint[0], length-1, wordToPrint[length]);
		}
	}
	return 0;
}
