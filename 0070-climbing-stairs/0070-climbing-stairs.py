class Solution(object):
    def climbStairs(self, n):
        if n == 0:
            return 1
        elif n == 1:
            return 1
        elif n == 2:
            return 2
        else:
            fib1 = 1
            fib2 = 2
            for _ in range(3, n + 1):
                fib = fib1 + fib2
                fib1, fib2 = fib2, fib
            return fib2