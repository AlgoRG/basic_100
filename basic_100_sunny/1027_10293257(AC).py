import io, sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
y,m,d = map(int,input().split('.'))
print('%02d-%02d-%04d'%(d,m,y))
