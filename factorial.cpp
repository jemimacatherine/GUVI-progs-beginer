#include <iostream>

using namespace std;

int main()
{
   
     // Variable Declaration
     int counter, n, fact = 1;

     // Get Input Value
     cout<<"Enter the Number :";
     cin>>n;

     //for Loop Block
     for (int counter = 1; counter <= n; counter++)
     {
         fact = fact * counter;
     }

     cout<<n<<" Factorial Value Is "<<fact; 
   
   return 0;
}

