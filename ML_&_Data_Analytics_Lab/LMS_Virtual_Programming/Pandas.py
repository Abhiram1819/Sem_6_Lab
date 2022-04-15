'''
Question:
Write a python program to read a CSV File (employee record - eg. salary dataset). Print column wise output. Do the following pre-processing functions on the dataframe created.

i) print rows, columns, size and shape of the corresponding dataset

ii) print the memory usage and dimensions of the corresponding dataset.

iii) print head and tail of the dataset with n value as 10

iv) print the values in 3rd column of the dataset fully and value at index [5,9].
'''
import pandas as pd
#read csv
df = pd.read_csv('salary.csv')
#rows in dataset
for i in range(len(df)) :
  print(df.iloc[i, 0], df.iloc[i, 2])
#colums in dataset
df.columns
#size of dataset
df.size
#shape of dataset
df.shape
#memory usage of dataset
df.memory_usage(index = False)
#dimensions of dataset
df.ndim
#head
df.head(10)
#tail
df.tail(10)
#print values in 3rd column
df.iloc[:,[3]]
#print value at index[5,9]
df.iloc[5,9]