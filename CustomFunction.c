#include <stdio.h>

int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a = 10;
	int b = 20;
	//函数的使用
	int max = get_max(a, b);
	printf("%d", max);

	return 0;
}
