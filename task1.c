#include <stdio.h>
void main (void)
{
	// 1.1 
	double pi = 3.1415926535;
	printf("%.2lf\n",pi);
	
	// 1.2 
	double e = 2.71828;
	printf("%.2lf\n",e);

	//1.3
	int number;
	printf("Type a number: ");
	scanf("%d",&number);
	printf("Your number is %d\n", number);

	//1.4
	int number2;
	printf("Type a number2: ");
	scanf("%d",&number2);
	printf("%d - is your number2\n", number2);

	//1.5
	int num1 = 1,
		num2 = 13,
		num3 = 49;
	printf("%d %d %d\n\n",num1, num2, num3);
	//1.6
	printf("%d  %d  %d\n\n",num1, num2, num3);

	//1.7
	int num4,num5,num6;
	scanf("%d %d %d",&num4, &num5, &num6);
	printf("%d  %d  %d\n\n", num4, num5, num6);

	//1.8 
	printf("%d %d %d\n\n",1,2,3);

	//1.9 
	int a = 50,b =10;
	printf("%d\n%d\n\n", a, b);
	//1.10 
	printf("%d\n%d\n%d\n\n",5, 10, 21);
	//1.11
	printf("%d\n%d\n%d\n%d\n\n",1, 2, 3, 4);

	


	return;
}