'''
Question:
Print of the String "Welcome". Matrix size must be N X M. ( N is an odd natural number, and  M is 3 times N.). The design should have 'WELCOME' written in the center.The design pattern should only use |, .and - characters.
Input: N = 7, M = 21
Output:  
---------.|.---------
------.|..|..|.------
---.|..|..|..|..|.---
-------welcome-------
---.|..|..|..|..|.---
------.|..|..|.------
---------.|.---------
'''

n, m = map(int,input("Enter n and m:").split())
pattern = [('.|.'*(2*i + 1)).center(m, '-') for i in range(n//2)]
print('\n'.join(pattern + ['WELCOME'.center(m, '-')] + pattern[::-1]))
