import numpy as np
p = 2
foundP = True
r = int(input("What range of prime numbers do you want to find? "))

nums = np.arange(start=1,stop=r+1,step=1)
nums[0] = -1;
while foundP:
	for i in range(2,int(r/p+1)):
		nums[p*i-1] = -1
	foundP = False
	for i in range(p,r):
		if nums[i] != -1:
			p = nums[i]
			foundP = True
			break
for i in nums:
	if i != -1:
		print(i, end=", ")
print()
