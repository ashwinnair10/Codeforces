#include <iostream>
int main(){
    double n,a;
    std::cin>>n;
    double ans=0.0;
    for(int i=0;i<n;i++) {
        std::cin>>a;
        ans+=a/n;
    }
    std::cout<<ans;
    return 0;
}