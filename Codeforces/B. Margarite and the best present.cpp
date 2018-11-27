#include <iostream>

using namespace std;

int main()
{
    int q;
    cin>>q;
    int l,r;
    for(int i=0;i<q;i++){

        cin>>l>>r;

        if((r-l+1)%2){
            if(l%2) (r%2)?cout<<(r-l+1)/2-r<<"\n":cout<<(r-l+1)/2+r<<"\n";
            else (r%2)?cout<<-(r-l+1)/2-r<<"\n":cout<<-(r-l+1)/2+r<<"\n";
        }

        else{
            (l%2)?cout<<(r-l+1)/2<<"\n":cout<<-(r-l+1)/2<<"\n";
        }

    }
    return 0;
}
