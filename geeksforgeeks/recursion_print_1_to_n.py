def printNos(N):
    #Your code here
    if N < 1:
        return
    printNos(N-1)
    print(N)

n = int(input("Enter number: "))
printNos(n)