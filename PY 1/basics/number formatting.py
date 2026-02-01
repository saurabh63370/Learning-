def print_formatted(number):
    for i in range (1,number+1):
        a=str(i)
        b=str(oct(i))
        c=str(hex(i))
        d=str(bin(i))
        print(f"{a:>10}{b:>10}{c:>10}{d:>10}")
    return("")        
number=int(input())
print_formatted(number)
n=len(bin(number))
print(n)