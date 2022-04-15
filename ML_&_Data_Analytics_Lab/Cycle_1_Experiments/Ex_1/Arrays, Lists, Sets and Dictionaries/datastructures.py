'''Arrays, Lists, Sets and Dictionaries'''

dcourses = {
    "python": "x",
    "iot": "y",
    "uit": "z"
}
print(dcourses)
print(dcourses["python"])
dcourses["python"] = "a"
print(dcourses)
for i in dcourses:
    print(i)
for j in dcourses.values():
    print(j)
for (i, j) in dcourses.items():
    print(i, j)
