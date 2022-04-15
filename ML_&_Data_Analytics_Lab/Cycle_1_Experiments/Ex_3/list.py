'''
Question:
From a given list, find the second highest value from the list.
Input: [6, 5, 2, 1, 6, 4]    
Output: 5 
'''

a = [ ]
a = [int(x) for x in input("Enter the list elements:").split()]
print("List = ",sorted(a))
print("Second highest value in the list:",a[-2])
