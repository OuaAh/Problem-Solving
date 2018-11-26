#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int T[n],D[n];
    for(int i=0;i<n;i++){
        cin>>T[i];
    }
    int c=1e6;
    for(int i=n-1;i>=0;i--){
        (T[i])?c++:c=0;
        D[i]=c;
    }
    c=1e6;
    for(int i=0;i<n;i++){
        (T[i])?c++:c=0;
        cout<<min(c,D[i])<<" ";
    }
    return 0;
}
