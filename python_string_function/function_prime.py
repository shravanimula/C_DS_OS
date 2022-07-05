'''
def prime():
    a=int(input('enter a number:'))
    print(type(a))
    for i in range(2,int(a/2)+1):
        if (a%i==0):
            print(a,'is not a prime number\n')
            break;
        else:
            print(a,'is  a prime number\n')
            return 0;

prime()

'''

def prime_range():
    min=int(input('enter a minimum range of elements:'))
    max=int(input('enter a maximum range of elements:'))
    for i in range(int(min),int(max)+1):
        for j in range(2,int(i/2)+1):
            if(i%j==0):
                break
        else:
                print(i,'is prime number\n')

prime_range()
