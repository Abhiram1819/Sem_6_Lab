/*
Write a c program to find the type of texts in the program

Example: 
1,2,3 = Integer
[a-z, A-Z] = Identifier
+,-,* = Operator

TEST CASE1:
Standard Input:
2
A
*
Expected Output:
Integer
Identifier
Operator

TEST CASE2:
Standard Input:
6
x
+
Expected Output:
Integer
Identifier
Operator
*/

#include<stdio.h>
int main()
{
    char a[3];
    int i;
    scanf("%c %c %c",&a[0],&a[1],&a[2]);
    for(i=0;i<3;i++)
    {
        switch(a[i])
        {
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case '0':
            printf("Integer\n");
            break;
            case '+':
            case '-':
            case '/':
            case '*':
            case '%':
            printf("Operator\n");
            break;
            default:
            printf("Identifier\n");
        }
    }
}

/*
Author's Solution:
*/
#include<stdio.h>
void getDoubleValue(int F){
   F = F*2;
   printf("F(Formal Parameter) = %d\n",F);
}
int main(){
   int A;
   scanf("%d", &A);
   getDoubleValue(A);
   printf("A(Actual Parameter) = %d\n",A);
   return 0;
}



