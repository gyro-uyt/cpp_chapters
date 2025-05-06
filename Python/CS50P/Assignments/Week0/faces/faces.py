def convert(cstr):
    cstr = cstr.replace(":)", "\N{SLIGHTLY SMILING FACE}")
    cstr = cstr.replace(":(", "\N{SLIGHTLY FROWNING FACE}")
    return cstr


def main():
    str = input()
    str = convert(str)
    print(str)


main()

# https://unicode.org/emoji/charts/full-emoji-list.html --> list of emoji name's
# https://www.reddit.com/r/Python/comments/qy4iym/you_can_insert_emoji_using_nname_of_emoji/ --> how to?
