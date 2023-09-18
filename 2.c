#include <stdio.h>
#include <stdlib.h>
int SO(int a ,int b){
         return a+b;
    }


int main()
{
    int SO1,SO2;
    printf("entrer la valeur du SO:");
    scanf("%d %d",&SO1,&SO2);
    printf("la la somme: %d \n",SO(SO1,SO2));
    return 0;
}
