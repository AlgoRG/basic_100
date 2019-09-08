import io, sys
sys.stdout= io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a=int(input(),16)
print('%o'%a)
