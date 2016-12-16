#include <iostream>
#include <cmath>
 using namespace std;
 int main ()
 {
   int Lx, Ly, Zx, Zy;
   cin>>Lx>>Ly>>Zx>>Zy;
   if (Lx == Zx || Ly == Zy){
     cout<<"YES";
   }
   else {
     cout<<"NO";
   }
 }
