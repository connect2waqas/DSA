A = [1, 5, 9,11,13]
B = [1, 2, 5, 7, 9,11,12,13]

def is_subsequence(A,B):
    left = 0
    right = 0
    while left < len(A) and right < len(B):
        if A[left] == B[right]:
            left +=1
            right +=1
        else:
            right +=1
    return left == len(A)
print(is_subsequence(A,B))

