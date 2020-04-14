#include <iostream>
using namespace std; 

int checkPrime(int num){
   if(num <= 1) 
    return 0;
   int t = num /2;
   for(int i = 2; i <=t;i++)
      if(num % i == 0)
        return 0;
    return 1;
   }
   
int main(){
  int num = 0;
  cin >> num;
  cout<<checkPrime(num);
  return 0;
}
