import io,sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a=int(input())
if(a<0):
    print('minus')
    if(a%2==0):
        print('even')
    else:
        print('odd')
else:
    print('plus')
    if(a%2==0):
        print('even')
    else:
        print('odd')
