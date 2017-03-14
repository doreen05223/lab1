#include<iostream>
using namespace std ;

int main()
{
    int n,i ;
    cin >> n ;
    cout << n <<" " ;
    for(i=n;i>1;){
       if(i%2==1){
          i=3*i+1 ;
          cout<<i<<" " ; 
       }
       else if(i%2==0){ 
               i=i/2 ;
               cout<<i<<" " ; 
       }
    }
    cout<<endl;
    return 0;
}
    
