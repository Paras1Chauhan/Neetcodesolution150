4 / 21

Courses

Algorithms & Data Structures for Beginners


Advanced Algorithms


System Design for Beginners

54 / 150

   The Neetcode 150 is the Blind 75 plus 75 more problems. It's a more beginner friendly and comprehensive list.





Status
Star
Problem   
Difficulty   
Video Solution
Code
Valid Palindrome	
Two Sum II Input Array Is Sorted	
3Sum	
Container With Most Water	
Trapping Rain Water	
View on Github
/*
    Given a string s, return true if it's a palindrome
    Ex. s = "A man, a plan, a canal: Panama" -> true

    2 pointers, outside in, skip non-letters & compare

    Time: O(n)
    Space: O(1)
*/

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        
        while (i < j) {
            while (!isalnum(s[i]) && i < j) {
                i++;
            }
            while (!isalnum(s[j]) && i < j) {
                j--;
            }
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }
            i++;
            j--;
        }
        
        return true;
    }
};