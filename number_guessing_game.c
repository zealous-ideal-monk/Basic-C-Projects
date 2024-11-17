#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int a=0;
    srand(time(NULL));
    int num = (rand() % 500) + 1;

    printf("Welcome to a Number Guessing Game!!!\n");
    while(a!=num) {
        printf("\nGuess A Number Between 1 to 500:\n");
        scanf("%d",&a);
        if (a<num) {
            printf("\nOhh no!! Too Low\n");
        }
        else if(a>num){
            printf("\nTch Tch Tch!! Little Bit High\n");
        }
        else{
            printf("\nYAYYYY!! You Finally Cracked It!!\n");
        }
    }
}
