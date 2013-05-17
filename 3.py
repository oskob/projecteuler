from __future__ import division
import math

num = 13195
i = 1


while True:

	if num / i == num // i:
		print i
	i += 1
	if i > 100:
		break

