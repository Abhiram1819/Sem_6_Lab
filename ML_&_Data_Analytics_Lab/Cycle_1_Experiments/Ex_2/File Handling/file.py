'''File Handling'''

fopen = open("ex0_module.py", "r")
fwrite = open("filewrite.txt", "w")
fwrite.write("Line of text added to the file ")
fwrite = open("filewrite.txt", "a")
fwrite.write("\nLine of text appended to the file")
fwrite.close()
fread = open("filewrite.txt", "r")
print(fread.read())
fread.close()
