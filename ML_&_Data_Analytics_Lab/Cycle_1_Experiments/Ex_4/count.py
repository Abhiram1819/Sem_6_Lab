'''
Question:
From the string input, count the special characters, alphabets, digits, lowercase and uppercase characters.
Input: Sathyabama 2019 @ 
Output:
Digits: 			4
Alphabets: 		   10
Special Characters: 1
Lowercase: 		    9
Uppercase: 		    1
'''

def Count(str):
    upper, lower, number, special = 0, 0, 0, 0
    for i in range(len(str)):
        if (ord(str[i]) >= 65 and ord(str[i]) <= 90): 
            upper += 1 
        elif (ord(str[i]) >= 97 and ord(str[i]) <= 122): 
            lower += 1 
        elif (ord(str[i]) >= 48 and ord(str[i]) <= 57): 
            number += 1 
        else: 
            special += 1
        alphabets = upper+lower

    print('Digits:', number)
    print('Alphabets:', alphabets)
    print('Special characters:', special)
    print('Lower case:', lower)
    print('Upper case:', upper) 
     
    
     

str = input("Enter the String:") 
Count(str) 
