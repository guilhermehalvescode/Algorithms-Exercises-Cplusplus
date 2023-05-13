graph = dict()

for i in range(101):
   graph[i] = []

try:
    while True:
      nums = input().split(', ')
      nums = list(map(int, nums))
      a = nums[0]
      b = nums[1]
      lstA = graph[a]
      lstA.append(b)
      lstB = graph[b]
      lstB.append(a)

      
except:
  for lst in graph:
      if graph[lst] != []:
        print('V' + str(lst), end = '')
        graph[lst].sort()
        for item in graph[lst]:
          print(' ' + str(item), end = '')
        print()
  
  exit(0)