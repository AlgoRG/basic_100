import io, sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a = int(input())
for i in range(5):
    print('[%d]'%(a//(10**(4-i))*(10**(4-i))))
    a%=10**(4-i)

