""" Determines the functions that can be used on a a datatype"""

numbers_list = [1, 2]
# print(dir(numbers_list))

# result = numbers_list.__add__([3, 5])
result = numbers_list + [3, 4]
print(result)