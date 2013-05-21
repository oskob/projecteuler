magic_number = 20
num = magic_number

while(True):
	success = True	
	for i in reversed(range(1, magic_number)):
		if num % i != 0:
			success = False
			break
		
	if success:
		print "Answer is: %i" % num
		break
	num += magic_number
