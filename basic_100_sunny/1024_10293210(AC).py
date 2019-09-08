import io, sys
sys.stdout=io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a = input()
sentence = list(a)
for i in range(len(sentence)):
    print('\'%s\''%sentence[i])
