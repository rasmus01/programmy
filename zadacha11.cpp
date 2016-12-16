#include <iostream>
#include <cmath>
 using namespace std;
 int main ()
 {
   int Kx,Ky,Zx,Zy;
   cin>>Kx>>Ky>>Zx>>Zy;
   int dx = Kx - Zx;
   int dy = Ky - Zy;
   if (dx < 0) dx = -dx;
   if (dy < 0) dy = -dy;
   if ((dx + dy) == 3 && dx != 0 && dy != 0) {
     cout<<"YES";
   }
   else {
     cout<<"NO";
   }
 }
