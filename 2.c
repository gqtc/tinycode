#include <stdio.h>

void squeeze(char *str1, char *str2)
{
	char hash[256] = {0};
	
	int index = 0; 
	int i = 0;

	//建立str2的哈希表
	while(str2[i] != '\0')
	{
		hash[str2[i]]++;
		i++;
	}

	index = 0;		//index记录str1中可删除字符的最小索引
	i = 0;
	while(str1[i] != '\0')
	{		
		if(hash[str1[i]] == 0)
		{
			str1[index] = str1[i];
			index++;
		}
		i++;
	}
	str1[index] = str1[i];
	
}


main()
{
	char str1[1024] = {0};
	char str2[1024] = {0};
	
	printf("input the str1: ");
	scanf("%s", str1);

	printf("input the str2: ");
	scanf("%s", str2);
	
	printf("%s\n", str1);
	printf("-\n");
	printf("%s\n", str2);
	printf("=\n");

	squeeze(str1, str2);
	printf("%s\n", str1);
}
