
import math
import os
import random
import re
import sys

#
# Complete the 'circularPalindromes' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts STRING s as parameter.
#


def circularPalindromes(s):
    # Write your code here
    n = len(s)
    # circularList = [s[i:n] + s[0:i] for i in range(n)]
    result = []
    for y in range(n):
        pal = s[y:n] + s[0:y]
        max = 0
        for i in range(n):
            if len(pal[i:n]) > max:
                for j in range(0, n-i):
                    t = pal[i:(n-j)]
                    if (max < len(t)):
                        if t == t[::-1]:
                            max = len(t)
                            break
                    else:
                        break
            else:
                break
        result.append(max)
    return result


s = 'eededdeedede'
print(circularPalindromes(s))
