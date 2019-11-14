#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sum(int a, int b)
{
	return a+b;
}
int min(int a, int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}
int divd(int a, int b)
{
	return a/b;
}

int main(void)
{
	int a, b;
	char op;
	
	int(*pf)(int,int);
	printf("caculate what:");
	scanf("%d %c %d",&a, &op,&b);
	
	switch(op)
	{
		case '+':
			pf=sum;
			break;
		case '-':
			pf=min;
			break;
		case '*':
			pf=mul;
			break;
		case '/':
			pf=divd;
			break;
	}
	
	printf("%d\n",pf(a,b));
}
