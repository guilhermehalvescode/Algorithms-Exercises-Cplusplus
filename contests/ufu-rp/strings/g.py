import re


def remove_accents(name):
    name = re.sub('á', 'a', name)
    name = re.sub('é', 'e', name)
    name = re.sub('í', 'i', name)
    name = re.sub('ó', 'o', name)
    name = re.sub('ú', 'u', name)
    name = re.sub('ý', 'y', name)
    name = re.sub('à', 'a', name)
    name = re.sub('è', 'e', name)
    name = re.sub('ì', 'i', name)
    name = re.sub('ò', 'o', name)
    name = re.sub('ù', 'u', name)
    name = re.sub('ä', 'a', name)
    name = re.sub('ë', 'e', name)
    name = re.sub('ï', 'i', name)
    name = re.sub('ö', 'o', name)
    name = re.sub('ü', 'u', name)
    name = re.sub('ÿ', 'y', name)
    name = re.sub('â', 'a', name)
    name = re.sub('ê', 'e', name)
    name = re.sub('î', 'i', name)
    name = re.sub('ô', 'o', name)
    name = re.sub('û', 'u', name)
    name = re.sub('ã', 'a', name)
    name = re.sub('õ', 'o', name)
    name = re.sub('ç', 'c', name)
    return name


while True:
    try:
        ent = input().replace(' ', '').lower().replace('.', '').replace(
            ',', '').replace(';', '').replace(':', '').replace('!', '').replace('?', '').replace('-', '')

        ent = remove_accents(ent)

        if ent == ent[::-1]:
            print("sim")
        else:
            print("nao")
    except EOFError:
        break
