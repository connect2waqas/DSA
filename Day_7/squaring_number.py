def sorted_squares(nums):
    result = [0] * len(nums)
    left = 0
    right = len(nums) -1
    write_pointer = len(nums) - 1
    while left <= right:
        left_square = nums[left] ** nums[left]
        right_square = nums[right] ** nums[right]
        if right_square > left_square:
            result[write_pointer] = right_square
            right -=1
        else:
            result[write_pointer] = left_square
            left +=1
    return result
nums = [-4, -1, 0, 3, 10]
print(sorted_squares(nums))
