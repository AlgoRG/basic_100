import io,sys
sys.stdout=io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a,b,c=map(int,input().split())
sum=a+b+c
print('%d\n%.1f'%(sum,sum/3))
