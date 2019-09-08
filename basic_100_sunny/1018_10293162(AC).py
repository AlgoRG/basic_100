import io,sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
h,m = map(int, input().split(':'))
print('%d:%d'%(h,m))
