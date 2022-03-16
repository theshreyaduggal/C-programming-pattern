/*printing star pattern*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()

{

   int num;

   clrscr();

   printf("Enter a number");

   scanf("%d",&num);

   for (int i=num; i>=1; i--);

   {

      for (int j=1; j<=i; j++)

      {

	printf("*",j);

      }

	printf("\n");

   }

   getch();
}