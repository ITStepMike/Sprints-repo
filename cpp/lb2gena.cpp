#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main(){
  
float c = 100,xn = M_PI/2;
float ans = xn;

for(int i = 0; i < c; ++i){
    
    xn = ans;
    ans = xn - (pow(xn,2)-cosf(xn))/((2*xn)+sinf(xn));
    cout <<ans<<endl;

}


    return 0;
}