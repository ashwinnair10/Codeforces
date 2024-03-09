#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t>0){
        char str[102];
        cin.getline(str,sizeof(str));
        int n=strlen(str);
        if(str[n-1]=='\n'){
            str[n-1]='\0';
            n--;
        }
        if(n<=10)
            cout<<str<<endl;
        else
            cout<<str[0]<<n-2<<str[n-1]<<endl;
        t--;
    }
    return 0;
}