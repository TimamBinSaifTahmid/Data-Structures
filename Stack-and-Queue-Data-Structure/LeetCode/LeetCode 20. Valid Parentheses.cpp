class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> result;
        int n = s.length();

        // declaring character array
        char char_array[n + 1];


        for(int i=0; i<s.size(); i++)
        {
            char_array[i]=s[i];
        }

        for(int i=0; i<n; i++)
        {
            if(result.size()!=0)
            {

                if(result.top()=='(')
                {
                    cout<<"in";
                    if(char_array[i]==')')
                    {
                        result.pop();
                        continue;
                    }
                }
                else if(result.top()=='{')
                {
                    if(char_array[i]=='}')
                    {
                        result.pop();
                        continue;
                    }
                }
                else if(result.top()=='[')
                {
                    if(char_array[i]==']')
                    {
                        result.pop();
                        continue;
                    }
                }

            }
            result.push(char_array[i]);
            cout<<char_array[i]<<" ";
        }
        if(result.size()!=0)
            return false;
        else
            return true;

    }
};
