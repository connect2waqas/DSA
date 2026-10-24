def longest_substring(text):
    left = 0
    max_len = 0
    seen_char = set()
    for right in range(len(text)):
        while text[right] in seen_char:
            seen_char.remove(text[left])
            left +=1
        seen_char.add(text[right])
        current_len = right - left + 1
        if current_len > max_len:
            max_len = current_len
        
    return max_len
text = "abcabcbb"
print(longest_substring(text))
