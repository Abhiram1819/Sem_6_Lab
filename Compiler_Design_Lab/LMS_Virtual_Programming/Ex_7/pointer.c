/*
Question:
Write a c program for showing function pointer by adding two numbers
*/

#include <stdio.h>

int main()
{
    int first, second, *p, *q, sum;
    scanf("%d%d", &first, &second);

    p = &first;
    q = &second;
    
    sum = *p + *q;
    
    printf("%d",sum);
    
    return 0;
}


/*
Author's Solution:
*/

/*function pointer example in c.*/

#include <stdio.h>

//function: sum, will return sum of two
//integer numbers

int addTwoNumbers(int x, int y)
{
    return x + y;
}

int main()
{
    int a, b, sum;

    //function pointer declaration
    int (*ptr_sum)(int, int);
    //function initialisation
    ptr_sum = &addTwoNumbers;

    scanf("%d",&a);
    scanf("%d",&b);

    //function calling
    sum = (*ptr_sum)(a, b);

    printf("%d", sum);

    return 0;
}
