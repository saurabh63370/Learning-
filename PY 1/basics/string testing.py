s='qA2'
a=0
for i in range (0,len(s)):
    if s[i].isalnum():
        a+=1
if a>0:
    print(True)
else:
    print(False)
b=0
for i in range (0,len(s)):
    if s[i].isalpha():
        b+=1
if b >0:
    print(True)
else:
    print(False)
    
c=0
for i in range (0,len(s)):
    if s[i].isdigit():
        c+=1
if c >0 :
    print(True)
else:
    print(False)
d=0
for i in range (0,len(s)):
    if s[i].islower():
        d+=1
if d > 0 :
    print(True)
else:
    print(False)
e=0
for i in range (0,len(s)):
    if s[i].isupper():
        e+=1
if e >0 :
    print(True)
else:
    print(False)