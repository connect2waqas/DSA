"Two Sum"
def TwoSum(weight,target):
    left = 0
    right = len(weight) - 1
    while left < right:
        current_sum = weight[left] + weight[right]
        if current_sum == target:
            return [left,right]
        elif current_sum > target:
            right -=1
        else:
            left +=1

weight = [2, 7, 11, 15]
target = 9
print(TwoSum(weight,target))