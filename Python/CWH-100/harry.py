import random
import string


def encode():
    msg = input("Enter the message to encode: ")
    if len(msg) < 3:
        encodedMsg = msg[::-1]
    else:
        encodedMsg = msg[1:] + msg[0]
        randomPrefix = "".join(random.choices(string.ascii_letters, k=3))
        randomSuffix = "".join(random.choices(string.ascii_letters, k=3))
        encodedMsg = randomPrefix + encodedMsg + randomSuffix
    print(f"Your encoded message: {encodedMsg}")


def decode():
    usrIp = input("Enter the message to decode: ")
    if len(usrIp) < 3:
        decodedMsg = usrIp[::-1]
    else:
        decodedMsg = usrIp[3:-3]
        decodedMsg = decodedMsg[-1] + decodedMsg[:-1]
    print(f"Your decoded message: {decodedMsg}")


print(
    "Do you want to Encode or Decode message,\n- Enter 'e' to encode\n- Enter 'd' to decode"
)
usrIp = input("Your input: ").lower()

if usrIp == "e":
    encode()
elif usrIp == "d":
    decode()
else:
    print("Wrong Input!")
