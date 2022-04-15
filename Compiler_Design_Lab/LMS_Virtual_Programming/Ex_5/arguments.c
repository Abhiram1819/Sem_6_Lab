/*
Question:
Write a C Program to Pass Arguments as Call by Value
*/


#include<stdio.h>
int formal(int a){
    a=a*2;
    return a;
}
int main(){
    int b;
    scanf("%d",&b);
    printf("F(Formal Parameter) = %d\n",formal(b));
    printf("A(Actual Parameter) = %d",b);
    
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
