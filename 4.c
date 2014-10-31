/*Ï£¶ûÅÅĞò*/

#include <stdio.h>

void shellsort(int *set, int n)
{
	int step, i, j;
	int key;

	for(step = n/2; step >= 1; step /= 2)
	{
		for(j = step; j < n; j++)
		{
			key = set[j];
			i = j - step;
			while(i >= 0 && set[i] > key)
			{
				set[i+step] = set[i];
				i -= step;
			}
			set[i+step] = key;

		}	
	}
}

int main()
{
	int set[10] = {67,34,3,2,1,90,76,43,9,4};

	shellsort(set, 10);

	int i;
	for(i = 0; i < 10; i++)
	{
		printf(" %d", set[i]);
	}
	printf("\n");
}
