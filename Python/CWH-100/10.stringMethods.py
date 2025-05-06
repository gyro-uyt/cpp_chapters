# strings are immutable i.e. CANNOT be changed Directly, i.e. whenever we do operations on string those are down on copies of that string, Not on the actual String
s1 = "ram's Charan!!!! Charan is Ram"
s2 = (
    s1.upper()
)  # this doesn't modifies the org. sttring i.e. s1 but creates the copies of it & performs the operation
s24 = s1.isupper()  # returns True if ALL the characters in the string are upper case
s3 = s1.lower()
s4 = s1.rstrip("!")  # 'rstrip("_")' removes any trailing characaters(_)
s5 = s1.replace(
    "Charan", "Sita"
)  # replaces ALL Occurances of a string with another string
s6 = s1.split(
    " "
)  # creates the list, a new element is registered whenever (" ") occurs,
# it splits the given string at the specified Instances and returns the separated strings as list item

s7 = (
    s1.capitalize()
)  # turns Only the FIRST Character of the string to uppercase & rest of the characters are turned to be Lowercase
s8 = s1.center(50)  # puts 50/2 empty spaces in front and back of the string
s9 = s1.center(50, ".")  # puts 50/2 (".") in front and back of the string
s10 = s1.count(
    "Charan"
)  # counts the number of times the given value has occured within the given string

s11 = s1.endswith(
    "!!"
)  # checks if the string ends with a given value. If yes then return True, else return False
s12 = s1.endswith("ran")
s13 = s1.endswith(
    "har", 2, 8
)  # we can also check for a value in between the string by providing start and end index positions
s25 = s1.startswith(
    "ra"
)  # checks if the string starts with a given value. If yes then return True, else return False

s14 = s1.find(
    "ran "
)  # searches EXACTLY for the first occurance of the given value & returns the index where it is present, if absent returns "-1"
s15 = s1.find("sh")  # returns -1, as there's NO 'sh' in the string
s16 = s1.index(
    "ara"
)  # searches for the first occurrence of the given value and returns the index where it is present. If given value is absent from the string then raise an exception.
# s17 = s1.index("sh")  # throwing errors
#  major difference btw. 'find' & 'index" being that index() raises an exception if value is absent whereas find() does not.

s18 = (
    s1.isalnum()
)  # is alphabhet numeric ---> returns True iff string consists only of A-Z, a-z, 0-9, else returns false
s19 = s1.isalpha()  # is alphabet ---> retruns True iff string consists of alphabets
s20 = s1.islower()  # returns True if all the characters in a string are lower-caseee
s21 = (
    s1.isprintable()
)  # returns True if all the values within the given string are printable, char like "\n" are non-printable
s22 = (
    s1.isspace()
)  # returns True iff the string contains white spaces, in case of other chars returns false
s26 = (
    s1.swapcase()
)  # changes the character casing of the string. Upper case are converted to lower case and lower case to upper case

s27 = s1.title()  # capitalizes each letter of the word within the string.
s23 = (
    s1.istitle()
)  # returns True iff the First letter of Each word of the string is Capitalized

print(
    len(s1),
    s1,
    s2,
    s3,
    s4,
    s5,
    s6,
    s7,
    s8,
    s9,
    s10,
    s11,
    s12,
    s13,
    s14,
    s15,
    s16,
    s18,
    s19,
    s20,
    s21,
    s22,
    s23,
    s24,
    s25,
    sep="\n",
)
# Always remember in python ENDS with index is upto (n-1) index ONLY
