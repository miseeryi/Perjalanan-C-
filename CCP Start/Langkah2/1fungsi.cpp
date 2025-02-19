#include <iostream>
using namespace std;

int deret(int n){
    if(n==1){
        return 1;
    } 
    else {
        return deret(n-1)+n;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<"Deret dari "<<n<<" = "<<deret(n)<<endl;
    return 0;
}
