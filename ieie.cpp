#include <iostream>

using namespace std;

int main(){
    double  sum=0,n=6 ;
    
    while(n<20){
        sum=sum+(1/n);
        n=n+1;
    }
    cout<< sum << endl;
    return 0;

}