#include <stdio.h>
#include <limits.h>
//из 8 си в 10 си
//сколько в 1 байте бит
//
int main() {
    int choice = 0;
    printf("Choose program\n>");
    scanf("%d", &choice);
    if (choice == 1) {
        int a;
        scanf("%d", &a);
        int d1 = 0;
        int d2 = a - 1;
        if (a) {
            for (int y = 0; y < a; y++) {
                for (int x = 0; x < a; x++) {
                    if ((y == 0) || (y == (a - 1))) {
                        printf("#");
                    } else {
                        if ((x == 0) || (x == (a - 1))) {
                            printf("#");
                        }
                        else if ((x == d1) || (x == d2)) {
                            printf("#");
                        }
                        else {
                            printf(" ");
                        }
                    }
                }
                printf("\n");
                d1++;
                d2--;
            }
        }
    }
    if (choice == 2){
        int input;
        int len = 0;
        scanf("%d", &input);
        int copy = input;
        while (copy > 0) {
            len++;
            copy /= 10;
        }
        int array[len];
        copy = input;
        for (int i = len - 1; copy > 0; i--) {
            array[i] = copy % 10;
            copy /= 10;
        }
        for (int i = 0; i < len; i++) {
            for (int j  = 0; j < )
        }
        printf("done");
    }
    return 0;
}
