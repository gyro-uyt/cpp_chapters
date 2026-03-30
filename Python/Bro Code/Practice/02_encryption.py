import random
import string

chars = list(" " + string.punctuation + string.digits + string.ascii_letters)
keys = chars.copy()

# Shuffling
random.shuffle(keys)

# print(chars)
# print(keys)

# Encryption
plain_text = input("Enter a message to encrypt: ")
cipher_text = ""

for characters in plain_text:
    index = chars.index(characters)
    cipher_text += keys[index]

print(f"Original message: {plain_text}")
print(f"Encrypted message: {cipher_text}")
