#include<iostream>
#include<string>
#include<stack>
#define MAX 36
using namespace std;


int main(){
 stack<char>a;
 stack<char>b;
 char isi;
 char arr[MAX];
 string balik;
 //
 cout<<"masukan:";
for(int i=0;i<MAX;i++){
    cin>>isi;
    arr[i];

    if(isi!='*'){
       b.push(isi);
       balik.push_back(b.top());
    }
     if(isi=='*'){
        a.push(isi);
        a.pop();
   }

}
//
while(!b.empty()){
    cout<<"hasil = "<<endl;
    cout<<balik<<endl;
    break;
    b.pop();
}
return 0;
}
//H**AL***O**AP***AK*A**B*****A*R*****
