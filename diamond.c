#include<stdio.h>

int main(){
    char min, max;
    int diameter, line, i, j;

    scanf("%c %c", &min, &max);
    
    //put your checker her max and min

    diameter = max - min;

    //with line I know where am I in my diamond
    line = 1;

    for(i = diameter ; i > 0 ; i--){
        char f = min;
        for(j = 0 ; j <= i ; j++){
            printf(" ");
        }
        for(j = 1 ; j <= line ; j++){
            printf("%c ", f);
            f++;
        }
        line++;
        printf("\n");
    }

    for(i = 0 ; i <= diameter ; i++){
        char f = min;
        for(j = 0 ; j <= i ; j++){
            printf(" ");
        }
        for(j = line ; j > 0 ; j--){
            printf("%c ", f);
            f++;
        }
        line--;
        printf("\n");
    }
}