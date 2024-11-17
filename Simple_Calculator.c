#include <stdio.h>

int main(){
    int a;
    int b;
    char operand;
    int solution;

    printf("YOO! So I heard you wanted to calculate something.\nLets Freaking Go.\nNow tell me a Operand quickly Baby\n");
    scanf(" %c", &operand);

    printf("Well,as you say soo...Now give me number quickly to operate on\n");
    scanf("%d",&a);

    printf("Hmm, Thats a good number. Now Pookie tell me a second number.\n");
    scanf("%d", &b);

    if (operand == '*') {
        solution=a*b;
        printf("Damm! Tha was easy bitch \n%d", solution);
    }
    else if (operand == '/') {
        if (b != 0) {
            solution=a/b;
            printf("Damm! Tha was easy bitch \n%d", solution);
        }
        else {
            printf("Bro,Your are a DumbFuck!Thats Undefined");
        }
    }
    else if (operand == '+') {
        solution=a+b;
        printf("Damm! Tha was easy bitch \n%d", solution);
    }
    else if (operand == '-'){
        solution=a-b;
        printf("Damm! Tha was easy bitch \n%d", solution);
    }
    else {
        printf("Lavde, Tu Thoda Sa BehenKaLoda Hai Kya?\n");
    }
    return 0;
}
