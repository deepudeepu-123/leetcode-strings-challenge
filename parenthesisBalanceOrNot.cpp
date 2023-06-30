//Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        int n=x.length();
      stack<char> s;
      char a;
      for(int i=0;i<n;i++)
      {
          a=x[i];
          if(s.empty())
          {
              s.push(a);
          }
          else if(a=='{'||a=='('||a=='[')
          s.push(a);
          else if((a==']'&&s.top()=='[')||(a=='}'&&s.top()=='{')||(a==')'&&s.top()=='('))
          s.pop();
          else
          return 0;
      }
      if(s.empty())
      return 1;
      else return 0;
    }
