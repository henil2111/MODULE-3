#include<stdio.h>
int main()
{
	int a,b,addition,subtraction,multiplication,divison,module;
	printf("enter two number");
	scanf("%d%d" ,&a,&b);
	
	addition=a+b;
	
	subtraction=a-b;
	
	multiplication=a*b;
	
	divison=a/b;
	
	module=a%b;
	
	printf("addition : %d\n",addition);
	printf("subtraction : %d\n",subtraction);
	printf("multiplication : %d\n",multiplication);
	printf("divison : %d\n",divison);
	printf("module : %d\n",module);
}
