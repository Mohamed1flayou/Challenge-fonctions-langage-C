#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int PGCD(int x, int y) {
    int i, j = 0, max, c = 0;

    int T[10];

    
    for (i = 1; i <= x; i++) {
        if (x % i == 0 && y % i == 0) {
            T[j] = i;
            j++;
            c++;
        }
    }

    max = T[0];
    for (i = 1; i < c; i++) {
        if (T[i] > max) {
            max = T[i];
        }
    }

    return max;
}

int main() {
    int x, y, res;
    printf("saisir le 1ere nombre : ");
    scanf("%d", &x);
    printf("saisir le 2eme nombre : "); 
    scanf("%d", &y);
    res = PGCD(x, y);
    printf("res = %d", res);
    return 0;
}
