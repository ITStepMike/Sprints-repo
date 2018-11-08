#include <iostream>
using namespace std;

class Tenzor{

private:

    int n,x,m,o;
    int* arr;
    int*** mas3d;

public:

Tenzor(){

    this->n = 3;
    this->x = 3;
    this->m = 3;

}

Tenzor(int n,int x,int m){

   this->n = n;
   this->x = x;
   this->m = m;
   this->o = this->n*this->x*this->m;
   arr = new int[o];

   mas3d = new int**[this->n];
    int i,j,k;
    
    cout <<"Enter elements"<<endl;

    for(i=0;i<this->n;i++) mas3d[i]=new int*[this->x];
 
    for(i=0;i<this->n;i++)
        for(j=0;j<this->x;j++) mas3d[i][j]=new int[this->m];
 
    for(i=0;i<this->n;i++)
        for(j=0;j<this->x;j++)
            for(k=0;k<this->m;k++)
            cin >> mas3d[i][j][k];

}

void Convert(){

int y = 0;

    for(int i = 0; i < this->n; i++){

        for(int j = 0; j < this->x; ++j){

            for(int k = 0; k < this->m; ++k){

                arr[y] = mas3d[i][j][k];
                ++y;   
            }
        }
    }

}

void Show(){

    for(int i = 0; i < this->o; ++i){
        cout <<arr[i]<<"   ";
    }

}



};



int main(){
    
    int n,x,m;
    cout <<"Enter n,x,m"<<endl;
    cin >>n>>x>>m;
    Tenzor obj = Tenzor(n,x,m);
    obj.Convert();
    obj.Show();
 





    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < x; ++j){
    //         for(int k = 0; k < m; ++k)
    //         {
    //             cin >>mat[i][j][k];
    //         }
    //     }
    // }
    // cout <<endl;
    
    
}