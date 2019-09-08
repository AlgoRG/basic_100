import io, sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a,b = map(int,input().split())
print(1 if a==b==0 else 0)
