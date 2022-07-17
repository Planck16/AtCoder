'''
10 = 2 * 5であるからn!!を素因数分解したときのmin(2の指数, 5の指数)が
答えであり、明らかに5の指数の方が小さいのでn!!が5で何回割れるかが求める
答えである。
nが奇数のとき、素因数に2が含まれないので答えは0。
nが偶数のとき
n!! = 2 * 4 * 6 * ...* (n-2) * n
n!! / 2 = 1 * 2 * 3 * ...* n/2 - 1 * n/2 = (n/2)!
なので、(n/2)!が何回5で割れるかを求めればよい。
'''


def solve(n):
    if n % 2 == 1:
        return 0
    
    n //= 2
    cnt = 0
    while n > 0:
        cnt += n // 5
        n //= 5
    return cnt


n = int(input())
print(solve(n))