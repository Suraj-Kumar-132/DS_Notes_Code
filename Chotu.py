str= input()
digit =0
char_count =0
spl_count =0

for ch in str:
    if(ch >= '0' and ch <= '9' ):
        digit  = digit + 1
    elif((ch >='A'and ch <= 'Z') or (ch >='a' and ch <= 'z')):
        char_count = char_count + 1
    else:
        spl_count = spl_count + 1
    

print(digit)
print(char_count)
print(spl_count)