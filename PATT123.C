/*Creating pattern 1 23 345*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()

{
   int n,a;

   clrscr();

   printf("Enter a number");

   scanf("%d",&n);

   for (int i=1; i<=n; i++)

   {

      a=i;

      for (int j=1; j<=i; j++)

      {

	printf("%d",a);

	a=a+1;

      }

      printf("\n");

   }

   getch();

}