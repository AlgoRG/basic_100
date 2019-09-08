import io,sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a=int(input())
for i in range(0,a+1):
    print(i)
