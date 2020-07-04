class Solution {
public:
    
vector<vector<string>> dp;

bool isPalindrome(string s, int i, int j)
{
	while(i<=j)
	{
		if(s[i]!=s[j]) return false;
		i++;
		j--;
	}

	return true;
}


void mcm(string s, int index, vector<string> p)
{

	if(index==s.length())
	{
		dp.push_back(p);
		return;
	}

	if(index>s.length())
		return;

	for(int j=index;j<s.length();j++)
	{
		if(isPalindrome(s,index,j))
		{
			p.push_back(s.substr(index,j-index+1));
			mcm(s,j+1,p);
			p.pop_back();
		}
	}
}

vector<vector<string>> partition(string s) {
        
       vector<string> p;
        mcm(s,0,p);
        return dp;
        
    }
};


