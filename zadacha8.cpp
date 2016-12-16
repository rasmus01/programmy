#include <iostream>
#include <cmath>
 using namespace std;
 int main ()
 {
   int Sx, Sy, Zx, Zy;
   cin>>Sx>>Sy>>Zx>>Zy;
   if (Sx - Zx == Sy - Zy){
     cout<<"YES";
   }
   else {
     cout<<"NO";
   }
   return 0;
 }
