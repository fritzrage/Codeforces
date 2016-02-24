#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char word[99];
	char wordOut[99];
	int i = 0;
	int k = 0;
	scanf("%s", &word);	
	while (word[i] != '\0')
	{
		if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U' || word[i] == 'Y')
		{			
			//
		}
		else
		{
			wordOut[k] = '.';
			wordOut[k + 1] = ((word[i] <= 'Z' && word[i] >= 'A') ? word[i] + 32 : word[i]);				
			k = k+2;
		}
		i++;
	}
	wordOut[k] = '\0';
	printf("%s", wordOut);
	return 0;
}
