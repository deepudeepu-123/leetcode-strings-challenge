class Solution {
public:
//Given two strings needle and haystack, return the index of the first occurrence of needle in haystack,
// or -1 if needle is not part of haystack.
    int strStr(string haystack, string needle) {
        int m = haystack.size(), n = needle.size();

        for (int i = 0; i <= m - n; i++) {

            int j = 0;

            for (; j < n; j++) {

                if (haystack[i + j] != needle[j]) {

                    break;

                }

            }

            if (j == n) {

                return i;

            }

        }

        return -1;
    }
};