t = int(input())
 
for _ in range(t):
    n = int(input())
    s = input().strip()
    count = s.count('1')
    print(count)
    for i in range(n):
        if s[i] == '1':
            print(i + 1, end=' ')
    print()