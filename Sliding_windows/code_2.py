def sliding_window(load,k):
    current_window_sum = sum(load[:k])
    min_sum = current_window_sum
    for i in range(k,len(load)):
        current_window_sum = current_window_sum - load[i - k] + load[i]
        if current_window_sum < min_sum:
            min_sum = current_window_sum
    return min_sum 
load = [10,20,30,5,2,8,40]
k = 3
minsum = sliding_window(load,k)
print(minsum)
