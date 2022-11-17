def angryProfessor(k, a):
    # Write your code here
    #  return 'Yes' if (k <= len(list(filter(lambda x: x <= 0, a)))) else 'No'
    return 'Yes' if (k <= len(list(filter(lambda x: x <= 0, a)))) else 'No'


k = 3
a = [-1, -3, 4, 2]
print(angryProfessor(k, a))
