t = int(input())
 
for _ in range(t):
    n, k = map(int, input().split())
    s = input().strip()
 
    if '1' not in s:
        print(0)
        continue
 
    save_one = 1
    last_one = s.find('1')
 
    for i in range(last_one + 1, n):
        if s[i] == '1':
            if i - last_one > k - 1:
                save_one += 1
            last_one = i
 
    print(save_one)