A = [1, 5, 9,11,13]
B = [1, 2, 5, 7, 9, 11, 12, 13]

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
# print(is_subsequence(A,B))

def common_ground(A,B):
    left = 0
    right = 0
    new_list = []
    while left < len(A) and right < len(B):
        if A[left] == B[right]:
            new_list.append(A[left])
            left +=1
            right +=1
        elif (A[left]) < (B[right]):
            left +=1
        else:
            right +=1
    return new_list
A = [1, 3, 4, 5, 7]
B = [2, 3, 5, 6]
common = common_ground(A,B)
print(common) 