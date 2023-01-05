class Solution
{
public:
    string longestString(vector<string> &words)

    {

        // code here

        sort(words.begin(),words.end());

        string ans= "";

        unordered_set<string> s;

        for(int i=0;i<words.size();i++)

        s.insert(words[i]);

        for(int i=0;i<words.size();i++)

        {

            string pat = words[i];

            string res="";

            bool flag = true;

            int j=0;

            // for(int j=0;j<pat.length();j++)

            while(j<pat.length())

            {

                res.push_back(pat[j]);

                if(s.find(res)==s.end()){

                flag =false;

                break;

                }

                j++;

            }

            if(res.length()>ans.length() && flag == true)

            ans=res;

        }

        return ans;

    }
};
