/*�����޷�������x��1�ĸ���*/

#include <stdio.h>

int bitcount(unsigned int x)
{
	int num;
	for(num = 0; x != 0; x &= x - 1)
		num++;
	
	return num;
}
int main()
{
	unsigned int x;
	x = 0x34;
	
	printf("number of 1 in x bits is %d\n", bitcount(x));

	return 0;
}

