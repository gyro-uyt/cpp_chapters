"""
I/P:
  4
  word
  localization
  internationalization
  pneumonoultramicroscopicsilicovolcanoconiosis

O/P:
  word
  l10n
  i18n
  p43s

"""

n = int(input())
store = []
for i in range(n):
    s = input()
    store.append(s)

for word in store:
    if len(word) > 10:
        new_word = word[0] + str(len(word) - 2) + word[-1]
        word = new_word
    print(word)
