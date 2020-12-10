#include <stdio.h>

int stack(int n)
{
	if(n==1)
		return 1;
	if(n==2)
		return 2;
	else
		return stack(n-1) + stack(n-2);	
}

int main(void)
{
	int num;
	scanf("%d", &num);
	printf("%d", stack(num));
return 0;
}
