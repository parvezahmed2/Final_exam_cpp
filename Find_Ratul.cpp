#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    getline(cin,s);
    stringstream ss(s);
    int flag=0;
    string word;
    while (ss>>word)
    {
        if(word=="Ratul"){
             flag=1;
        }
        
    }
    if(flag>0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}