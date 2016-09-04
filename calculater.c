#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a,b,c,d,e,f;
	char option;
do{
	printf("\nEnter your first number=\n");
	scanf("%d",&a);
	printf("Enter your second number=\n");
	scanf("%d",&b);
    printf("Enter 1 for Addition\n");
	printf("Enter 2 for Sub\n");
	printf("Enter 3 for mul\n");
	printf("Enter 4 for div\n");
	scanf("%d",&n);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	if (n==1)
	{
	printf("totall=%d",c);
    }
	else if (n==2)
	{
	printf("totall=%d",d);
	}
	else if (n<=3)
	{
	printf("totall=%d",e);
    }
	else
	{
	printf("totall=%d",f);
    }
	printf("\nDo you want to continue y/n?\n");
	option = getche();
    }while(option == 'y');
	getch();
	return 0;
	
}
