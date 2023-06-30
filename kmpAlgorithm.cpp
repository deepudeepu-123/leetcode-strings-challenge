/*Given a string of characters, find the length of the longest proper prefix which is also a proper suffix.
NOTE: Prefix and suffix can be overlapping but they should not be equal to the entire string.
Input: s = "abab"
Output: 2
Explanation: "ab" is the longest proper 
prefix and suffix. */	
int lps(string s) {
    int n = s.length();
    vector<int> lps(n, 0);
    int i = 1;
    int j = 0;

    while (i < n) {
        if (s[i] == s[j]) {
            j++;
            lps[i] = j;
            i++;
        } else {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }

    return lps[n - 1];
}