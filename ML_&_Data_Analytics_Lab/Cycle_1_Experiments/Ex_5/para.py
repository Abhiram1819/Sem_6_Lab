'''
Question:
Input String (s) and Width (w). Wrap the string into a paragraph of width w.
Input:
s = Sathyabama
w = 3
Output:
Sat
hya
bam
a
'''

s=input("Enter String:")
n=int(input("Enter Width:"))
i=0
while(i<len(s)):
      print(s[i:i+n])
      i+=n
