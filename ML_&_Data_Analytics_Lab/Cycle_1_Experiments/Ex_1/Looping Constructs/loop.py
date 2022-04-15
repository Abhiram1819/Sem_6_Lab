'''Looping Constructs'''

courses = ['python', 'iot', 'uit']
print(courses)
courses.sort()
print(courses)
print(len(courses))
print(courses[1])
courses[1]='ml'
print(courses)
courses.append('dm')
courses.insert(1, 'sqat')
print(courses)
courses.remove('sqat')
print(courses)

if 'ml' in courses:
    print('ml is part of courses')
else:
    print('no')
courses.clear()
print(courses)
