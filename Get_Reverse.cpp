 #include<bits/stdc++.h>
 using namespace std;
    class Student{
        public:
        string name;
        int  cls;
        char sec;
        int marksMath;
        int  marksEnglish;
    };

 int main(){
    int n;
    cin>>n;
     Student a[n];
     for(int i=0; i<n; i++){
         cin>>a[i].name>>a[i].cls>>a[i].sec>>a[i].marksMath>>a[i].marksEnglish;
     }

     for(int i=n-1; i>=0; i--){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].marksMath<<" "<<a[i].marksEnglish<<endl;
     }
     
     return 0;
 }