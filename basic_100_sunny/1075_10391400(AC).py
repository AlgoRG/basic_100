import io, sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a=int(input())
for i in range(a-1,-1,-1):
    print(i)
