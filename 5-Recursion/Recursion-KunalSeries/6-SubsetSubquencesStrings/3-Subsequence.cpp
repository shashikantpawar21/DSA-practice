// abc --> a b c ab ac bc abc 

#include <iostream>
#include<vector>
using namespace std;

void subsequence(string s, string res, int index) {
    // cout << s << "  " << res << "  " << index << endl;
    if(s.empty())
    {
        cout << res << ",  ";
        return;
        // return res + ", ";
    }
    char ch = s[0];

     subsequence(s.substr(1, s.length() - 1), res + ch, index +1);
     subsequence(s.substr(1, s.length() - 1), res , index +1);
}

vector<string> subsequence1(string s,string res, int index) {
    vector<string> seqs;
    if(s.empty())
    {
        string temp = res;
        seqs.push_back(res);
         return seqs;
    }
    char ch = s[0];

    vector<string> seqs1 =  subsequence1(s.substr(1, s.length() - 1), res + ch, index +1);
    vector<string> seqs2 =subsequence1(s.substr(1, s.length() - 1), res , index +1);

    for (int i = 0; i < seqs1.size(); ++i)
    {
        string temp = seqs1[i];
        seqs.push_back(seqs1[i]);
    }
    
    for (int i = 0; i < seqs2.size(); ++i)
    {
        string temp = seqs2[i];
        seqs.push_back(seqs2[i]);
    }
    return seqs;
}

vector<string> subsequenceascii(string s,string res, int index) {
    vector<string> seqs;
    if(s.empty())
    {
        string temp = res;
        seqs.push_back(res);
         return seqs;
    }
    char ch = s[0];
    int ascii = ch + 0;
    string asc = to_string(ascii);

    vector<string> seqs1 =  subsequenceascii(s.substr(1, s.length() - 1), res + ch, index +1);
    vector<string> seqs2 =subsequenceascii(s.substr(1, s.length() - 1), res , index +1);
    vector<string> seqs3 =subsequenceascii(s.substr(1, s.length() - 1), res + asc , index +1);

    for (int i = 0; i < seqs1.size(); ++i)
    {
        string temp = seqs1[i];
        seqs.push_back(seqs1[i]);
    }
    
    for (int i = 0; i < seqs2.size(); ++i)
    {
        string temp = seqs2[i];
        seqs.push_back(seqs2[i]);
    }
    for (int i = 0; i < seqs3.size(); ++i)
    {
        string temp = seqs3[i];
        seqs.push_back(seqs3[i]);
    }
    return seqs;
}


int main() {
    //  subsequence("abc", "", 0);
    vector<string> seqs = subsequenceascii("abc", "", 0);
    // cout << res << endl;
    for (int i = 0; i < seqs.size(); ++i)
    {
        cout << seqs[i] << " ";
    }
    cout << endl;
}