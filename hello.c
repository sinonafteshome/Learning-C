#include <stdio.h>

    int x;
    int y;

    void compare_numbers(int x,int y){
        
    if (x < y){

        printf("x(%d) is less than y(%d)" ,x,y);
    }
    else if (x > y) {
        printf("x(%d) is greater than y(%d)" , x, y);

    }
    else{
        printf("x(%d) is equal to y(%d)", x,y);
    }

    }

int main()
{

    printf("x: ");
    scanf("%d", &x);

    printf("y: ");
    scanf("%d", &y);


    //lets call the function here

    compare_numbers(x, y);
}