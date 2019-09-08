import io,sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a=input()
if(a=='A'):
    print('best!!!')
elif(a=='B'):
    print('good!!')
elif(a=='C'):
    print('run!')
elif(a=='D'):
    print('slowly~')
else:
    print('what?')
