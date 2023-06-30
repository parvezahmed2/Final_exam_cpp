 #include<bits/stdc++.h>
 using namespace std;
 class Student{
    public:
    string name;
    int cls;
    char sec;
    int id;
    int marksMath;
    int marksEng;
    int totalNumber;
 };
 bool cmp(Student a, Student b){
        if(a.totalNumber>b.totalNumber) return true;
        else if(a.totalNumber==b.totalNumber){
             if(a.id<b.id) return true;
             else return false;
        }
        

        else return false;
 }
 int main(){
    int n;
    cin>>n;
    Student a[n];
    for(int i=0; i<n; i++){
        cin>>a[i].name>>a[i].cls>>a[i].sec>>a[i].id>>a[i].marksMath>>a[i].marksEng;
    }

    for(int i=0; i<n; i++){
        a[i].totalNumber=a[i].marksMath+a[i].marksEng;
    }
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].id<<" "<<a[i].marksMath<<" "<<a[i].marksEng<<endl;
    } 
     return 0;
 }