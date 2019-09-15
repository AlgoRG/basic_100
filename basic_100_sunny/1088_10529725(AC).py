import io, sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a=int(input())
for i in range(a+1):
    if(i%3!=0):
        print(i,end=' ')
