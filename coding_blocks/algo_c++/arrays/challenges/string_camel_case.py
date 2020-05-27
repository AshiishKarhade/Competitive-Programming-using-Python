def camel_case_split(str): 
      
    start_idx = [i for i, e in enumerate(str) 
                 if e.isupper()] + [len(str)] 
  
    start_idx = [0] + start_idx 
    return [str[x: y] for x, y in zip(start_idx, start_idx[1:])]
	
str = input()
ans = camel_case_split(str)
for a in ans:
	print(a)

