def solve(coins,target):
  arr = [0] * (target+1)
  arr[0] = 1
  for i in coins:
    for j in range(i,target+1):
      arr[j] += arr[j-i]
  return arr[-1]

#Test
input = 3
print(solve(range(1,input + 1,2),input))