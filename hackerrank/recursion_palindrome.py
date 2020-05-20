string = input("Enter a string: ")

def is_palindrome(input):
    if len(input) <= 1:
        return True
    else:
        first = input[0]
        last = input[-1]
        return (first == last) & is_palindrome(input[1:-1])

print(is_palindrome(string))