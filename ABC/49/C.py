s = input()
dp = [False] * (len(s) + 1)
dp[0] = True
for i in range(len(s) + 1):
    if i >= 5 and dp[i-5] and s[i-5:i] == "erase":
        dp[i] = True
    if i >= 6 and dp[i-6] and s[i-6:i] == "eraser":
        dp[i] = True
    if i >= 5 and dp[i-5] and s[i-5:i] == "dream":
        dp[i] = True
    if i >= 7 and dp[i-7] and s[i-7:i] == "dreamer":
        dp[i] = True

print("YES" if dp[len(s)] else "NO")