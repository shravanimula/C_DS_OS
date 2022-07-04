
a=int(input("enter a value:"))
b=int(input("enter b value:"))
print(a,b)
if a > b:
    print(' a is greater than b')
elif b > a:
    print('b is greater than a')
else :
    print('both are equal')


c=int(input('enter c value:'))
d=int(input('enter d value:'))
e=int(input('enter e value:'))
print(c,d,e)
if c > d and c > e:
    print('c is greater than d and e ')
elif d > c and d > e:
    print('d is grater than c and e')
elif e > c and e > d:
    print(' e is greater than c and d')
else:
    print('all are equal')
