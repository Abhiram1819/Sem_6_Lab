'''Exception Handling'''

try:
    print(x)
except:
    print("An exception occurred")
try:
    print(x)
except NameError:
    print("Variable X is not declared")
except:
    print("An exception occurred")
try:
    fopen = open("nofile.txt", "r")
    fopen.write("test")
except:
    print("Cannot write to file, as it is opened in read mode")
finally:
    fopen.close()
