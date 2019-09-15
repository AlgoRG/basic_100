import io, sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a,d,n=map(int,input().split())
print('%d'%(a+d*(n-1)))

