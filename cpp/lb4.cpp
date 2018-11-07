#include <iostream>
#include <cmath>
using namespace std;

class Matrix{

public:

int size;
double **arr;

    Matrix(){
        this->arr = new double*[3];
        for(int i = 0; i < 3; ++i)
            this->arr[i] = new double[3];
        this->size = 3;
    }

    Matrix(int size){
        
        this->size = size;
        this->arr = new double*[this->size];
        for(int i = 0; i < this->size; ++i)
            this->arr[i] = new double[this->size];


    }

    void SetMatrix(){

        for(int i = 0; i < this->size; ++i)
            for(int j = 0; j < this->size; ++j)
            cin >>this->arr[i][j];
        
    }
    void ShowMatrix(){
    for(int i = 0; i < this->size; ++i)
        {
            for(int j = 0; j < this->size; ++j)
                cout << this->arr[i][j]<<"   ";
            cout <<endl;
        }
    }

 
double determ(double **M, int n) 
{
    double det;
    if(n==2) 
    {
        det = (M[0][0]*M[1][1])-(M[1][0]*M[0][1]);
        return det;
    }
    double **A = new double*[n-1];
    for(int i=0;i<n-1;i++) 
        A[i] = new double[n-1];
    det=0;
    for(int k=0;k<n;k++)
        
    {
        for(int i=1;i<n;i++)
            for(int j=0,t=0;j<n;j++)
                if(j!=k)
                {
                    A[i-1][t]=M[i][j];
                    t++;
                }
    if(k%2==0)
        det=det+M[0][k]*determ(A,n-1);
    else 
        det=det-M[0][k]*determ(A,n-1);
    }
    return det;

}
~Matrix(){

for(int i = 0; i < this->size; ++i)
    delete[] this->arr[i];
delete[] this->arr;

}

};



int main(){
    int n;
    cout <<"Enter dimention of the matrix"<<endl;
    cin >> n;
    Matrix obj = Matrix(n);
    cout <<"SET"<<endl;
    obj.SetMatrix();
    cout <<"SHOW"<<endl;
    obj.ShowMatrix();
    cout <<"Find Determ"<<endl;
    cout <<obj.determ(obj.arr,obj.size)<<endl;
    return 0;
}