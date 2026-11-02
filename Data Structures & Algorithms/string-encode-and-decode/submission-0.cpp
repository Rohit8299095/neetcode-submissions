class Solution {
public:

    string encode(vector<string>& strs) {
          string encoded="";
          for(auto str:strs)
          {
              int len=str.length();
              encoded+=to_string(len)+"#"+str;
          }
          return encoded;
    }

    vector<string> decode(string s) {
             vector<string>decoded;
             int j = 0;
             while(j < s.size())
             {
                int hashPos = s.find('#', j);
                int len = stoi(s.substr(j, hashPos - j));
                decoded.push_back(s.substr(hashPos + 1, len));
                j = hashPos + 1 + len;
             }
             return decoded;

    }
};