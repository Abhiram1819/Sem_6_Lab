// Question:
// Write a C Program for EMI Calculator 

// Test Case:

// Standard Input:

// Enter principal: 33

// Enter rate: 456

// Enter time in year: 22

// Expected Output:

// Monthly EMI is= 12.540000



// FORMULA: 

//     rate = rate / (12 * 100); /*one month interest*/

//     time = time * 12; /*one month period*/

//     emi = (principal * rate * pow(1 + rate, time)) / (pow(1 + rate, time) - 1);


#include<math.h>
#include <stdio.h>
float emi_calculator(float p, float r, float t)
{
    float emi;
    int x=1+r;
    int y=t;
    int res=1;
    for(int i=0;i<y;i++)
    {
        res*=x;
    }
    r=r/(12*100);
    t=t*12;
    emi=(p*r*res)/(res-1);
    return(emi);
}
int main()
{
    float principal, rate, time, emi;
    principal=33;
    rate=456;
    time=22;
    emi=emi_calculator(principal,rate,time);
    printf("Monthly EMI is= %f\n", emi);
    return 0;
}