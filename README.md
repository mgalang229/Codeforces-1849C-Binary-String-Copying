Link: https://codeforces.com/problemset/problem/1849/C
### Analysis
```
input:
6 5
101100
1 2
1 3
2 4
5 5
1 6

sequence:
0 1 2 3 4 5
1 0 1 1 0 0

lf:
0 1 2 3 4 5
-1 1 1 1 4 6

rg:
0 1 2 3 4 5
0 3 3 3 6 6

queries:
l = 1, r = 2
ll = rg[l-1] and rr = lf[r-1]
ll = rg[0] and rr = lf[1] -> these values are needed to be reversed so that we are still checking within the range [l, r]
ll = 0 and rr = 1
{0, 1}

l = 1, r = 3
ll = rg[l-1] and rr = lf[r-1]
ll = rg[0] and rr = lf[2]
ll = 0 and rr = 1
{0, 1}

...and so on
```
