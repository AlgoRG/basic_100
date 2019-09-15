import io, sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
h,b,c,s=map(int,input().split())
x = h*b*c*s
print('%.1f MB'%(x/8/1024/1024))
