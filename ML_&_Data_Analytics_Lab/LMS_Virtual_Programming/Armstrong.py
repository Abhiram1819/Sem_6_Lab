'''
Question:
Read the range of Values.

Input : 100 and 1000
Output : 153, 370, 371, 407

Input : 1000 to 9999
Output : 1634, 8208 and 9474 .

For example:

Test	Input	Result
T1
100
1000
Armstrong Series :
153
370
371
407
Completed
'''

print("Armstrong Series :")
T1=int(input())
T2=int(input())
while T1<=T2:
    res=0
    temp=T1
    noOfDigit=0
    while temp>0:
        temp=int(temp/10)
        noOfDigit=noOfDigit+1
    num=T1
    while num>0:
        rem=num%10
        pow=1
        i=0
        while i<noOfDigit:
            pow=pow*rem
            i=i+1
        res=res+pow
        num=int(num/10)
    if res==T1:
        print(res)
    T1=T1+1
print("Completed")
