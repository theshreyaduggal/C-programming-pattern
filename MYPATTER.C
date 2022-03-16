/*Printing pattern 12345 23451*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()

{

  int n;

  clrscr();

  printf("Enter the no.");

  scanf("%d",&n);

  for (int i=1; i<=n; i++)

  {

     for (int j=i; j<=n; j++)

     {

	printf("%d",j);

     }

     for (int s=1; s<=i-1; s++)

     {

	printf("%d",s);

     }

     printf("\n");

  }

  getch();

}