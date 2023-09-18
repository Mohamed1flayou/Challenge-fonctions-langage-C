#include <stdio.h>

int max2(int x, int y){
    if (x > y)
        return x;
    else
        return y;
}

int max4(int x, int y, int c, int d){
    int maximum1 = max2(x,y);
    int maximum2 = max2(c,d);

        return max2(maximum1,maximum2);
}
int main() {
    int x, y, c , d;
    printf("saisir le 1ere nombre : ");
    scanf("%d",&x);
    printf("saisir le 2eme nombre : ");
    scanf("%d",&y);
    printf("saisir le 3eme nombre : ");
    scanf("%d",&c);
    printf("saisir le 4eme nombre : ");
    scanf("%d",&d);
    max4(x,y,c,d);
    return 0;
}

