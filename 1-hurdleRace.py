import math
import os
import random
import re
import sys

#
# Complete the 'hurdleRace' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER k
#  2. INTEGER_ARRAY height
#


def hurdleRace(k, height):
    # Write your code here
    return max(height) - k if max(height) > k else 0
  # return max(0, max(height) - k)


k = 8
height = [1, 6, 3, 5, 2]
print(hurdleRace(k, height))
