/*star pyramid*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()

{
   int n;

   clrscr();

   printf("Enter a number");

   scanf("%d",&n);

   for (int i=1; i<=n; i++)

   {

      for (int s=1; s<=n-i; s++)

      {

	printf("  ");

      }

      for (int j=1; j<=i; j++)

      {

	printf("  *");


      }

	printf("\n");

    }

   getch();

}
