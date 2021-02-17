// Function to return if the paranthesis are balanced or not
bool ispar(string x)
{
    // Your code here
    stack<char> s;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='(' || x[i]=='[' || x[i]=='{')
        {
            s.push(x[i]);
        }
        else
        {
            if(s.empty())
            {
                return false;
            }
            
            char top=s.top();
            
            
            if(x[i]==')' && top!='(')
                return false;
            else if(x[i]=='}' && top!='{')
                return false;
            else if(x[i]==']' && top!='[')
                return false;
            else
                s.pop();
                
        }
    }
    return s.empty();
}
