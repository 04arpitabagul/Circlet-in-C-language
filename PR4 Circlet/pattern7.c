//Q.7 Develop a program that prints the given Custom alphabetic pattern using a nested for loop.
//* * * * *
//*       *
//* * * * *
//*
//*

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1 || i==5 || j==1 || j==5)
			{
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	for(i=1;i<=2;i++){
		for(j=1;j<=1;j++){
			printf("* ");
		}
		printf("\n");
	}
	getch();
}
