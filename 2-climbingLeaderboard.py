import math
import os
import random
import re
import sys

#
# Complete the 'climbingLeaderboard' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER_ARRAY ranked
#  2. INTEGER_ARRAY player
#
ranked = [100, 100, 50, 40, 40, 20, 10]
player = [5, 25, 50, 120]


def climbingLeaderboard(ranked, player):
    # Write your code here
    ranked = sorted(list(set(ranked)), reverse=True)
    player = sorted(player, reverse=True)

    leng = len(ranked)
    count = 0
    result = []
    for i in range(len(player)):
        while count < leng and player[i] < ranked[count]:
            count += 1
        result.append(count+1)

    return result[::-1]


print(climbingLeaderboard(ranked, player))
