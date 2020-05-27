string = input()

freq = dict()

for s in string:
    #print(type(s))
    if s not in freq:
        freq[s] = 1
    else:
        freq[s] += 1 

max = None
max_val = 0
for k,v in freq.items():
    if v > max_val:
        max = k
        max_val = v
print(max)

