/*pattern1 23 456*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()

{

   int num,sum=0;

   clrscr();

   printf("Enter a number");

   scanf("%d",&num);

   for (int i=1; i<=num; i++)

   {

     for (int j=1; j<=i; j++)

     {

	sum=sum+1;

	printf("%d",sum);

     }

	printf("\n");

   }

      getch();

}

