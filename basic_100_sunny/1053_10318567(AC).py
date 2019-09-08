import io,sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a = int(input())
print(0 if a==1 else 1)
