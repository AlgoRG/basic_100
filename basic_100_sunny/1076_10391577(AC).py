import io,sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a=input()
for i in range(ord('a'),ord(a)+1):
    print(chr(i)+' ',end='')
