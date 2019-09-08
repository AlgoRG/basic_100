import io, sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a = int(input())
sum = 0
for i in range(a+1):
    if(i%2==0):
        sum+=i
        
print(sum)
