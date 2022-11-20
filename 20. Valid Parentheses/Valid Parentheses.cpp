class Solution {
public:
bool isValid(string s) {
    if(s.size()%2 == 1)
        return false;
    int ind = 0;
    vector<char> v(s.size());
    for(int i = 0; i < s.size(); i++)
    {
        //cout<<"ind="<<ind<<endl;
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            v[ind]=s[i];
            ind +=1;
        }
        else
        {
            if(ind==0)
                return false;
            char com;
            if(s[i]==']')
                com='[';
            else if(s[i]==')')
                com='(';
            else if(s[i]=='}')
                com='{';
            if(v[ind-1]!=com)
                return false;
            ind -= 1;
        }
    }
    if(ind != 0)
        return false;
    return true;
}
};
