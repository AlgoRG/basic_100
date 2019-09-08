import io,sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a,b = map(int, input().split())
print(0 if a>b else 1)
