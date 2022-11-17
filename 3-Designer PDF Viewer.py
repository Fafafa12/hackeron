
import math
import os
import random
import re
import sys

#
# Complete the 'designerPdfViewer' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY h
#  2. STRING word
#


def designerPdfViewer(h, word):
    # Write your code here
    return len(word) * max([h[ord(i)-97] for i in word])


h = [1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5,
     1, 1, 5, 5, 1, 5, 2, 5, 5, 5, 5, 5, 5]
word = 'abc'
print(designerPdfViewer(h, word))
