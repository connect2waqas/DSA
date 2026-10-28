class Solution:
    def LengthOfLongestSubstring(self,text: str) -> int:
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
s1 = Solution()
print(s1.LengthOfLongestSubstring(text))

class Solution_to_shortest_window:
    def shortest_window(self, load: list, S : int) -> int:
        left = 0
        min_len = float('inf')
        current_sum = 0
        for right in range(len(load)):
            current_sum +=load[right]
            while current_sum >= S:
                current_wind_len = right - left + 1
                if current_wind_len < min_len:
                    min_len = current_wind_len
                current_sum -=load[left]
                left +=1
        if min_len == float('inf'):
            return 0
        else:
            return min_len
s2 = Solution_to_shortest_window()
load = [2, 3, 1, 2, 4, 3]
S = 7
t2 = s2.shortest_window(load,S)
print(t2)