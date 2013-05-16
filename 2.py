from __future__ import division

cur = 2
prev = 1
limit = 4000000
sum = 0

while cur < limit:
	if cur % 2 == 0:
		sum += cur
	prev, cur = (cur, cur + prev)

print sum