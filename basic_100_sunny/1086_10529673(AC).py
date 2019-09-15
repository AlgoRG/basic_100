import io, sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
w,h,b=map(int,input().split())
total = w*h*b
print('%.2f MB'%(total/8/1024/1024))
