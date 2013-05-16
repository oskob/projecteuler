from __future__ import division

cur, prev, sum = 2, 1, 0

while cur < 4000000:
	if cur % 2 == 0:
		sum += cur
	prev, cur = cur, cur + prev

print sum