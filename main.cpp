#include <iostream>

using namespace std;

int main()
{
    cout<<"hello";
   int x[3];
    for(int i=0;i<3;i++){
        cin>>x[i];
    }
    for(int i=0;i<2;i++){
            for(int j=i+1;j<3;j++){
        if(x[i]<x[j]){
            int tap=x[i];
            x[i]=x[j];
            x[j]=tap;
        }
     }

    }

    int c=x[1]-x[0];
    int d=x[1]-x[2];
    if(c<0){
        c*=-1;
    }
    if(d<0){
        d*=-1;
    }

    cout<<c+d;


    return 0;
}
