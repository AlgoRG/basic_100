import io, sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a=int(input())
sum = 0
for i in range(a+1):
    sum+=i
    if(sum>=a):
        print(sum)
        break
