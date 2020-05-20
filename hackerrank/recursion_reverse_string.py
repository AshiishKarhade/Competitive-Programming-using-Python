def reverse_substring(input):
    #base case
    if len(input)==0:
        return ""
    else:
        first = input[0]
        reversed = reverse_substring(input[1:])
    return reversed + first



string = input("Enter a string: ")
print(reverse_substring(string))