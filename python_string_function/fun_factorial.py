def find_factorial(num):
    if(num==0):
        return 1
    return(num*find_factorial(num-1))

print('factorial of numbers:',find_factorial(5))













