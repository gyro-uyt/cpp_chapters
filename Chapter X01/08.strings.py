s1 = "This is a 'string'"
s2 = '\nthis is also a "valid" string'
s3 = "\nthis is another \"string\""
S4 = '''\nHELLO he said to me,
    how are you 
    where are you'''
print(s1, s2, s3, S4, sep=' ~ ')

# in Python, String is like an Array of Characters
print(s1[0])  # counting starts from '0'
print(s1[1])
print(s1[2])
print(s1[3])
