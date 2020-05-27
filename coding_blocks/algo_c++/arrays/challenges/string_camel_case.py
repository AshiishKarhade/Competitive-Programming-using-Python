import re 

def camel_case_split(str): 
	return re.findall(r'[A-Z](?:[a-z]+|[A-Z]*(?=[A-Z]|$))', str) 
	
str = input()
ans = camel_case_split(str)
for a in ans:
	print(a)