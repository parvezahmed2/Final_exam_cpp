#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int cls;
    char sec;
    int id;

};
int main(){
    int n;
    cin>>n;
    Student a[n];
    for(int i=0; i<n; i++){
        cin>>a[i].name>>a[i].cls>>a[i].sec>>a[i].id;
        
    }
    int s=0,e=n-1;
    while (s<e)
    {
        int  tmp=a[s].id;
        a[s].id=a[e].id;
        a[e].id=tmp;
        s++;
        e--;
    }
    
    for(int i=0; i<n; i++){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].id<<endl;
    }
    
    return 0;
}