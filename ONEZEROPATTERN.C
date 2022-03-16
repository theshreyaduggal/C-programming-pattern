/*printing pattern 1 01 101*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()

{

   int n,a;

   int x=1,y=0;

   clrscr();

   printf("Enter a no.");

   scanf("%d",&n);

   for (int i=0; i<=n; i++)

   {

     for (int j=1; j<=i; j++)

     {

       if ((i+j)%2==0)

       {

	 printf("%d",x);

       }

       else

       {

	 printf("%d",y);

       }

     }

       printf("\n");

   }

   getch();
}






