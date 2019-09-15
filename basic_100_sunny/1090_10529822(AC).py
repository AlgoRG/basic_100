import io, sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a,r,n=map(int,input().split())
print(a*(r**(n-1)))
