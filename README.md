# LeetCode Tasks
---
## Python
`Lpython` - Solved python leetcode tasks

---
## CPP
`Lcpp` - Solved CPP leetcode tasks
### RomanToInt
-Solution:
`` 
Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

    I can be placed before V (5) and X (10) to make 4 and 9. 
    X can be placed before L (50) and C (100) to make 40 and 90. 
    C can be placed before D (500) and M (1000) to make 400 and 900.

Given a roman numeral, convert it to an integer.

 

Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
``

```cpp
int romanToInt(string s) {
    int result = 0;

    for (int i = 0; i < s.length(); i++) {
        
        int current = 0;
        int next = 0;

        // Give each letter a value
        if (s[i] == 'I') current = 1;
        else if (s[i] == 'V') current = 5;
        else if (s[i] == 'X') current = 10;
        else if (s[i] == 'L') current = 50;
        else if (s[i] == 'C') current = 100;
        else if (s[i] == 'D') current = 500;
        else if (s[i] == 'M') current = 1000;

        // Check the next letter too
        if (s[i+1] == 'I') next = 1;
        else if (s[i+1] == 'V') next = 5;
        else if (s[i+1] == 'X') next = 10;
        else if (s[i+1] == 'L') next = 50;
        else if (s[i+1] == 'C') next = 100;
        else if (s[i+1] == 'D') next = 500;
        else if (s[i+1] == 'M') next = 1000;

        // If current is smaller than next, subtract
        // Otherwise just add
        if (current < next)
            result -= current;
        else
            result += current;
    }

    return result;
}
```


---
## Bash


---
## HTML & CSS


---
## SQL


---
