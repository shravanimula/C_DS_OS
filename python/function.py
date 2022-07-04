a=1
b=1
def sum():
    b=20
    global a
    a=10
    c=a+b
    print(c)
    return c*2
d=sum()
print(d)
print(a,b)
