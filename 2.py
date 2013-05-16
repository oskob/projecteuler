from __future__ import division

cur, prev, sum = 2, 1, 0
while cur < 4000000:
	prev, cur, sum = cur, cur + prev, sum + cur if cur % 2 == 0 else sum

print sum


# 4613732