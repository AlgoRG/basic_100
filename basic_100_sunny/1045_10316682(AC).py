import io,sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a,b = map(int,input().split())
print('%d\n%d\n%d\n%d\n%d\n%.2f'%(a+b,a-b,a*b,a//b,a%b,a/b))
