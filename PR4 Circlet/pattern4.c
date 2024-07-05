//Q.4 Develop a program that prints the given Inverted Left half triangle pattern using a nested for
//loop.
//
//1 0 1 0 1
//  1 0 1 0
//    1 0 1
//      1 0
//        1

#include <stdio.h>
#include<conio.h>

int main() {
    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<i; j++) {
            printf(" ");
        }
        for(j=1; j<=6-i; j++) {
            printf("%d ", (j % 2 == 0) ? 0 : 1);
        }
        printf("\n");
    }
    return 0;
}
