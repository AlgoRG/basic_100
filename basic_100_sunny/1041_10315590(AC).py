﻿import io,sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
a=input()
print(chr(ord(a)+1))