/*printing pattern 1 10 101*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()

{

   int n,a;

   clrscr();

   printf("Enter a no.");

   scanf("%d",&n);

   for (int i=1; i<=n; i++)

   {

     for (int j=1; j<=i; j++)

     {

	a=j%2;

	printf("%d",a);

     }

     printf("\n");

   }

   getch();

}
