#include<bits/stdc++.h>
using namespace std;


    int fibonachi (int n){

       if(n<=1) return n;
       else return fibonachi(n-1)+fibonachi(n-2);

    }


    int main(){
        int n;
        cin>>n;
        cout<<endl;
        for(int i=0; i<=n; i++){

            cout<<i<<"  "<<fibonachi(i)<<"  "<<endl;;
        }

 cout<<endl;

         // for(int i=0; i<=n; i++){

         //   cout<<fibonachi(i)<<"  ";
       // }

        cout<<endl;

      //cout<<fibonachi(10)<<endl;

    return 0;
    }
