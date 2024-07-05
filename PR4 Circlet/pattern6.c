//Q.6 Develop a program that prints the given Custom numeric pattern using a nested for loop.

//1                 1
//1 2             2 1
//1 2 3         3 2 1
//1 2 3 4     4 3 2 1
//1 2 3 4 5 5 4 3 2 1

#include<stdio.h>
#include<conio.h>
void main(){
	int n;
	printf("Enter Your Number: ");
	scanf("%d",&n);
	int i;
	int j;
	int space;
	
	for(i=1;i<=n;i++){
	   for(j=1;j<=i;j++){
	   	printf("%d",j);
	   }
	   	for(space=n;space>i;space--){
	   		printf("  ");
		   }
		   for(j=i;j>=1;j--){
		   	printf("%d",j);
		   }
		      printf("\n");
	   }
	
	getch();
	}
