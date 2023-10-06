#include<iostream>
using namespace std;

// Brute Force method for prime number with O(n)
bool isPrime(int n){

    if(n<=1){
        return false;
    }

    for(int i = 2; i<n; i++){ // can also use i < n/2 
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if (isPrime(n)) {
        cout<<"The number is Prime."<<endl;
    }
    else{
        cout<<"The number is Not Prime."<<endl;
    } 
    return 0;
}