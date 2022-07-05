def fun_fibonnaci(num):
    if(num==0):
        return 0
    elif (num==1):
        return 1
    else :
        return(fun_fibonnaci(num-1)+fun_fibonnaci(num-2))

print('fibonnaci of 5 is:',fun_fibonnaci(2))
