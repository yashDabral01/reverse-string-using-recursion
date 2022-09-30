#include<iostream>
using namespace std;
void reverseString(string s){
if(s.length()==0){ //base condition
    return ;
}
string ros = s.substr(1);
reverseString(ros);
cout<<s[0]<<" ";
}
int main(){
    string str = "yashdabral";
    reverseString(str);
    cout<<endl;
    return 0;
}