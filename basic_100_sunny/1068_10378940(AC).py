import io,sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a=int(input())
if(a<40):
    print('D')
elif(a<70):
    print('C')
elif(a<90):
    print('B')
else:
    print('A')
