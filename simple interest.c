#include<stdio.h>
main()
{
	float principal,rate,time,simple_interest;
	
	printf("Enter the principal: \n");
	scanf("%f",&principal);
	
	printf("Enter the rate of interest: \n");
	scanf("%f",&rate);
	
	printf("Enter the time in years: \n");
	scanf("%f",&time);
	
	simple_interest = (principal * rate * time) / 100;
	
	 printf("Simple Interest: %.2f\n", simple_interest);
	 
}
