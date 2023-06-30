//here A is the given string to search 
    //and B is the dictionary which contains various strings
    //for example:n = 12
     /* B = { "i", "like", "sam",
      "sung", "samsung", "mobile",
      "ice","cream", "icecream",
      "man", "go", "mango" }
      A = "ilike"
      Output:
      1
      Explanation:
      The string can be segmented as "i like".
      */
      //aproach:if part of A is contain by B then we call for the remaining part of A
    int dicContains(string s,vector<string> &B){
        int n=B.size();
        for(int i=0;i<n;i++){
            if(s==B[i]) return 1;
        }
        return 0;
    }
    int solve(string A,vector<string> &B){
        int n=A.size();
        if(n==0) return 1;
        for(int i=1;i<=n;i++){
            if(dicContains(A.substr(0,i),B) && solve(A.substr(i,n-i),B)) return 1;
        }
        return 0;
    }
    int wordBreak(string A, vector<string> &B) {
        
        return solve(A,B);
    }