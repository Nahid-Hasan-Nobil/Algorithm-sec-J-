#include<bits/stdc++.h>
using namespace std;



     unsigned long long int factorial(unsigned long long int n){

        if(n<=0) return 1;
        else return n*factorial(n-1);

     }


     int main(){

              int n;
        cin>>n;
        cout<<endl;
        for(int i=0; i<=n; i++){

            cout<<i<<"  "<<factorial(i)<<"  "<<endl;;
        }

     return 0;

     }
