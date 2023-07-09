//length of the longest substring achievable that contains only "1" . you can choose only one "0".
#include <iostream>
using namespace std;
int main() 
{
    string s="1101100111";
    
    int count=0,l=0,ans=0;
    for(int r=0;r<s.size();r++)
    {
        if(s[r]=='0')
            count++;
        while(count>1)
        {
            if(s[l]=='0')
                count--;
            l++;
        }
        ans=max(ans,r-l+1);
    }
    cout<<ans;
}
