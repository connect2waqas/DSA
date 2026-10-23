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

def highest_streak(views,k):
    window_sum = sum(views[:k])
    max_sum = window_sum
    for i in range(k,len(views)):
        window_sum = window_sum + views[i] - views[i - k]
        if window_sum > max_sum:
            max_sum = window_sum
            
    return max_sum
views = [10, 20, 50, 10, 60, 20, 5]
k = 4
highest_views = highest_streak(views,k)
print(highest_views)

def pack_suitcase(weights,limit):
    left = 0
    current_sum = 0
    max_items = 0
    for right in range(len(weights)):
        current_sum += weights[right]
        while current_sum > limit:
            current_sum -= weights[left]
            left +=1
        current_items = right - left + 1
        if current_items > max_items:
            max_items = current_items
    return max_items
weights = [10, 20, 30, 5, 10, 15, 10]
limit = 40
v = pack_suitcase(weights,limit)
print(v)