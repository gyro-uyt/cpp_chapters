from typing import List

class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        ans = []

        for i in range(1, n + 1):
            if i % 15 is 0:
                ans.append("FizzBuzz")
            elif i % 3 is 0:
                ans.append("Fizz")
            elif i % 5 is 0:
                ans.append("Buzz")
            else:
                ans.append(str(i))

        return ans
