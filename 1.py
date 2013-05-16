from __future__ import division

limit = 1000
nums = [3, 5]
sum = 0

for num in nums:
	cur = num
	numSum = 0
	while cur < limit:
		used = False
		for tNum in nums:
			if tNum < num and cur/tNum == cur//tNum:
				used = True
				break;
		if not used:
			numSum += cur
		cur += num
	sum += numSum
	
print sum