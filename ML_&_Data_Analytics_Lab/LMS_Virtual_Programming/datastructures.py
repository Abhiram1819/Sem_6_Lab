'''
Question:
Write a python code for Performing below Operations:
1. Create a List : Fruits = ["Apple","Banana","Mango","Orange","Pineapple","Kiwi","Papaya","Watermelon"], and display the same.

2. Add an fruit at 5th position to the list : "Avocado"

3. slice the list from item 2 to 4 and display item at [-2]

4. Create two sets and display set Union and set Difference.

5.Create a Tuple and display item from 2 to 5.

6. Create  a Dictionary and display a. Item Keys    b. Item Values . Modify anyone Value, given a key
'''
Dictionary=List=Tuple=""
dic={'Python':'x','IoT':'y','DM':'z'}
print(dic)
print(dic['Python'])
dic['python']='a'
print(dic)
for i in dic:
    print(i,dic[i])
lis=['Apple', 'Banana', 'Mango', 'Orange', 'Pineapple', 'Kiwi', 'Papaya', 'Watermelon']
print(lis)
lis1=['carrot', 'beetroot', 'tomato', 'banana']
print(lis1)
tup=('almond', 'cashew', 'raisin', 'walnut', 'pistachio', 'dates')
print(tup)
lis[5]='Avocado'
print(lis)
print(lis[2:4])
print(lis[0:4])
print(lis+lis1)
print(tup[2:5])

'''
Question:
Write python code to , find the second highest value from the given input list.
Input:  [6, 5, 2, 1, 6, 4] 
Output: 5
'''
import sys
Case1, Case2, Case3 = 0, 0, 0

a = sys.stdin.readline()
n = int(a)
arr = []

for i in range(n):
    b = sys.stdin.readline()
    c = int(b)
    arr.append(c)
    
arr.sort()

print("Second highest element in list is :",arr[-2])