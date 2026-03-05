class Solution {
public:
    string oddString(vector<string>& words) {
        vector<vector<int>> diff;
        for(string s : words){
            vector<int> dif;
            for(int i = 1; i < s.size(); i++){
                dif.push_back(s[i]-s[i-1]);
            }
            diff.push_back(dif);
        }
        vector<int> com;
        if(diff[0]==diff[1] || diff[0]==diff[2]){
            com = diff[0];
        }
        else{
            com = diff[1];
        }
        for(int i = 0; i < diff.size(); i++){
            if(diff[i]!=com){
                return words[i];
            }
        }
        return " ";
    }
};
