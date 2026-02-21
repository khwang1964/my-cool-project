#include <stdio.h>

int main()
{
	int num;

	scanf("%d", &num);

	for (int i = 0; i < num; ++i)
		printf("i = %d: Hello World!\n", i);

	return 0;
}
