'''
Question:
Write python code to , find the second highest value from the given input list.
Input:  [6, 5, 2, 1, 6, 4] 
Output: 5
'''
import sys
Case1,Case2,Case3=0,0,0
lst=[]
n=int(sys.stdin.readline())
for i in range(n):
    ele=int(sys.stdin.readline())
    lst.append(ele)
lst.sort()
print("Second highest element in list is :",lst[-2])
