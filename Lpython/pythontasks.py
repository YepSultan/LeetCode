


def solution(s):
	result = 0
	i = 0
	for i in range(len(s)):

		current = 0
		next1 = 0
		
	

		if s[i] == 'I': current = 1
		elif s[i] == 'V': current = 5
		elif s[i] == 'X': current = 10
		elif s[i] == 'L': current = 50
		elif s[i] == 'C': current = 100
		elif s[i] == 'D': current = 500
		elif s[i] == 'M': current = 1000

		if i + 1 < len(s):
			if s[i+1] == 'I': next1 = 1
			elif s[i+1] == 'V': next1 = 5
			elif s[i+1] == 'X': next1 = 10
			elif s[i+1] == 'L': next1 = 50
			elif s[i+1] == 'C': next1 = 100
			elif s[i+1] == 'D': next1 = 500
			elif s[i+1] == 'M': next1 = 1000

		if current < next1:
			result -= current
		else:
			result += current

	print("Number: ", result)




solution(input("Enter the numeral: "))