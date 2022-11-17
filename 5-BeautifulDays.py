import math
import os
import random
import re
import sys

#
# Complete the 'beautifulDays' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER i
#  2. INTEGER j
#  3. INTEGER k
#


def beautifulDays(i, j, k):
    # Write your code here
    return len(list(filter(lambda x: (x-int(str(x)[::-1])) % k == 0, range(i, j+1))))


i = 20
j = 23
k = 6
