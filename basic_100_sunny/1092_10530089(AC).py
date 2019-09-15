import io, sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')

def gcd(a,b):
    mod=a%b
    while(mod>0):
        a=b
        b=mod
        mod=a%b
    return b

a,b,c=map(int,input().split())
lcm = a*b//gcd(a,b)
print(lcm*c//gcd(lcm,c))

