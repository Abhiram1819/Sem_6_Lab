/*
Question:
Write a C program to count the number of alphabets in the given string.
*/

#include<stdio.h>
#include<string.h>
int main(){
    int i, n,count=0;
    char st[100];
    scanf("%s",st);
    n=strlen(st);
    for(i=0;i<n;i++){
        if ((st[i]>='a' && st[i]<='z') || (st[i]>='A' && st[i]<='Z')){
            count+=1;
        }
    }
    printf("%d",count);
}