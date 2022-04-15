N = int(input("Enter N:"))
Z = int(input("Enter Z:"))
s = 0
a = {}
k = 1
while k <= N:
    key = k 
    print("enter numbers in list(",k,"):")
    value = [int(x) for x in input().split()] 
    a[key] = value 
    k += 1
for i in a:
   x = max(a[i])
   s = s + x**3
S = s%Z
print("S = (f(X1) + f(X2) + f(X3) + ----+ f(XN)) Modulo Z:",S)
