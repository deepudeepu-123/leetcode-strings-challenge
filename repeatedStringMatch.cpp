class Solution {
public:
    int repeatedStringMatch(string a, string b) {
         int repeat = (b.length() - 1) / a.length() + 1; 
    string repeated_a = "";
    for (int i = 0; i < repeat; i++) {
        repeated_a += a; 
    }
    if (repeated_a.find(b) != string::npos) { 
        return repeat;
    } else if ((repeated_a + a).find(b) != string::npos) { 
        return repeat + 1;
    } else {
        return -1;
        
    }
    }
};