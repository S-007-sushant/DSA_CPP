// Code problem : 204
// Given an integer n, return the number of prime number that are strictly less then n.

#include<iostream>
#include<vector>
using namespace std;

// brute force method
// Function to check for prime
// bool isPrime(int number){

//     if(number<=1){
//         return false;
//     }
//     for (int i = 0; i < number; i++)
//     {
//         if (number%i==0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// function to count prime number till n numbers
// int countPrimes(int n){
//     int count = 0;
//     for (int i = 2; i < n; i++)
//     {
//         if (isPrime(i))
//         {
//             count++;
//         }
//     }
// return count;
// }


//  Sieve of Eratosthenes
int countPrime(int n){
    int count = 0;
    vector<bool> prime(n+1,true);
    prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++)
    {
        if(prime[i]){
            count++;

            // marking false for multiplication of prime number
            for (int j = 2*i; j < n; j=j+i)
            {
                prime[j] = false;
            }
            
        }

    }
    return count;
}


int main(){

    int num;
    cin>>num;
    int result = countPrime(num);
    cout<<"Number of counts are :"<<result<<endl; 
    return 0;
}