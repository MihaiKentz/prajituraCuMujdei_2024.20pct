#include <iostream>

using namespace std;

int main()
{
    int Ca, Cb, X;
    cin>>Ca>>Cb>>X;
    if(X==1)
    {
        if(Cb%2==0) cout<<"IMPOSIBIL";
        else
        {
            cout<<Cb+1<<endl;
            for(int i=1; i<=Cb+1; i++){
                if(i%2==1)
                    cout<<"UMPLE A"<<endl;
                else cout<<"VARSA A IN B"<<endl;
            }
        }

    }
}
