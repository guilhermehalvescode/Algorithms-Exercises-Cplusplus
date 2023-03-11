

while True:
    try:
        ent = input()

        n, v = ent.split(' ')

        s = v.replace(n, '')
        if s != '':
            print(int(s))
        else:
            print("0")
    except EOFError:
        break
