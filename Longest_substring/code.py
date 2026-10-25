class Solutions:
    def LengthOfLongestSubstring(self, text: str) -> int:
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
s1 = Solutions()
text = "abcabcbb"
t1 = s1.LengthOfLongestSubstring(text)
print(t1)


def minimum_window(load,S):
    left = 0
    max_len = 0
    



load = [2, 3, 1, 2, 4, 3]
S = 7
minimum_window(load,S)
