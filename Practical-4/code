//Iterative Code 
#include<iostream> 
using namespace std;
int factorial(int n){ 
   int fact = 1;
 for(int i = 1; i <= n; i++){ 
   fact = fact * i; 
 }
   return fact; 
}
int main(){ 
   int n;
 cout<<"enter the number "; 
 cin>>n;
 cout<<"factorial of the number is: "<<factorial(n);
   return 0; 
}
//Recursive Code 
#include<iostream> 
using namespace std;
int factorial(int n){ 
  if(n==0){ 
     return 1; 
   } 
   else{ 
     return n*factorial(n-1); 
   } 
}
int main(){ 
   int n;
   cout << "Enter a positive integer: ";
   cin >> n;
   if (n < 0) {
       cout << "Factorial is not defined for negative numbers." << endl;
   } else {
       cout << "Factorial of " << n << " is " << factorial(n) << endl;
   }
   return 0;
}
