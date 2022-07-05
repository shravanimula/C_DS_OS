def string(str):
    print(str.upper())
    print(str.lower())

a='thundersoft india'
print(a.upper())
b='THUNDERSOFT INDIA'
print(b.lower())
c='Thundersoft India'
print(c.upper())
d='Thundersoft India'
print(d.lower())
string(d)
e='  thundersoft india   '
print(e.strip())#strip means it removes the space before
                #and/or after the actual text
f='thundersoft india privated limited hyd'
print(f.split())

