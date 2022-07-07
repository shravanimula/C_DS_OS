''' abcdefgh
    abc1def2gh
    ab2cd4ef6gh8
    '''
str='abcdefgh'
str1='1234'
for i in range(2,len(str),2):
      str=str[:i]+str1[0]
print(str)
