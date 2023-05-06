import math

def fill_list(lim):
    list = []

    for index in range(2, lim + 1):
        list.append(index)

    return list

def remove_zeros(list):
    list2 = []

    for index in range(len(list)):
        if list[index]:
            list2.append(list[index])

    return list2

def sieve_of_eratosthenes(lim):
    sieve = fill_list(lim)
    limit = int(math.sqrt(lim))

    for index1 in range(0, limit):
        
        if not sieve[index1]:
            continue

        for index2 in range(index1 + 1, lim - 1):
            if sieve[index2] and (not (sieve[index2] % sieve[index1])):
                sieve[index2] = 0

    return remove_zeros(sieve)


inp = int(input())

lst = sieve_of_eratosthenes(inp)

for i in range(len(lst)):
    if inp % lst[i] == 0 and (inp // lst[i]) in lst:
        print(1)
        exit()

print(0)