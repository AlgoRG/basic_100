import io,sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
y,m,d = map(int,input().split('.'))
print('%04d.%02d.%02d'%(y,m,d))
