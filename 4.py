from __future__ import division
import math

def a():
	for digits in reversed(range(5, 7)):
		limit = int(pow(10, math.ceil(digits/2)-1))
		left = (limit * 10) - 1
		while left >= limit:
			right = str(left)[::-1] if digits % 2 == 0 else str(int(math.floor(left / 10)))[::-1]
			palindrome = int( "%s%s" % ( left, right ))
			for a in reversed(range(111, 999)):
				for b in reversed(range(111, 999)):
					if a * b == palindrome:
						return palindrome
						
			left -= 1
		
print a()