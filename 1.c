#include <stdio.h>


int main()
{
	int pchar[26] = {0};
	int c;
	int maxnum = 0;

	while((c = getchar()) != EOF)
	{
		if(c >= 'a' && c <= 'z')
		{
			pchar[c-'a']++;
		}
	}

	int i = 0;
	for(; i < 26; i++)
	{
		if(maxnum < pchar[i])
		{
			maxnum = pchar[i];
		}
	}
	
	int j;
	for(i = maxnum; i > 0; i--)
	{
		printf("\n%6d |", i);
		for(j = 0; j < 26; j++)
		{
			if(pchar[j] == i)
			{
				printf(" * ");
				pchar[j]--;
			}
			else
			{
				printf("   ");
			}
		}
	}
	printf("\n        ");
	for(i = 0; i < 26; i++)
	{
		printf("---");
	}
	printf("\n        ");

	for(i = 0; i < 26; i++)
	{
		printf(" %c ", i+'a');
	}
	printf("\n");
}
