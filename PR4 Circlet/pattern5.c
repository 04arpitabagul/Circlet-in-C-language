//Q.5 Develop a program that prints the given Full Pyramid pattern using a nested for loop.
//
//        5
//      4 5 4
//    3 4 5 4 3
//  3 3 4 5 4 3 2
//1 2 3 4 5 4 3 2 1

#include <stdio.h>

int main() {
    int i, j, n = 5;

    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            printf("  ");
        }
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        for (j = 2; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

