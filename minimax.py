max=0
min=0
arr=[int(x) for x in input().split()]
print(arr)
for i in range(5):
  for j in range(0, 5-i-1):
      if arr[j] > arr[j+1] :
                arr[j], arr[j+1] = arr[j+1], arr[j]
for i in range (1,5):
    max+=arr[i]
for i in range (0,4):
    min+=arr[i]
print(min,max)
