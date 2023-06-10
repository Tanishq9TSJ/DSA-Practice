#include <iostream>
#include <vector>
#include <string>
using namespace std;

void F(string &str, int i, string result, vector<string> &li)
{
    if(i == str.length()){
        li.push_back(result);
        return;
    }
    F(str, i+1, result + str[i], li);
    F(str, i+1, result, li);
}

int main()
{
    vector<string> res;
    string str = "abc";
    F(str, 0, "", res);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}