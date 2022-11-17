import math
import os
import random
import re
import sys

#
# Complete the 'viralAdvertising' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER n as parameter.
#


def viralAdvertising(n):
    shared = 5
    liked = 0
    cumulative = 0
    for i in range(n):
        liked = math.floor(shared/2)
        cumulative += liked
        shared = liked * 3
    return cumulative


n = 3
print(viralAdvertising(n))
print(math.prod([]))
