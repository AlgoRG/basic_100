import io, sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a=int(input(),16)
for i in range(1,16):
    print('%X*%X=%X'%(a,i,a*i))
