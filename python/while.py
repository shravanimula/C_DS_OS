
a=int(input('enter a value:'))
while a > 0:
    print(a)
    a-=1
print(a)

b=int(input('enter b value:'))
while b > 0:
    print(b)
    b-=2


c=int(input('enter c value:'))
while c < 6:
    print(c)
    if c==3:
        break
    c+=1
print(c)


d=int(input('enter c value:'))
while d < 6:
    d+=1
    if d==3:
        continue
    print(d)
