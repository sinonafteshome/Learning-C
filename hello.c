/*### 1. Number Comparison Function (`compare_numbers`)
A simple C program that takes two integer inputs from a user and determines their relationship.

* **File Name:** `main.c` (or whatever you named your file)
* **What it does:** 
  * Asks the user to enter two numbers (`x` and `y`).
  * Compares the values using an `if-else` control structure.
  * Prints out if `x` is greater than, less than, or equal to `y`.*/



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