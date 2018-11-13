#include <iostream>
using namespace std;

class Object{

    private:

        int age;

    public:

        Object(){

            age = 18;

        }

        Object(int age){

            this->age = age;

        }

        int GetAge(){

            return age;

        }

        void SetAge(int age){

            this->age = age;

        }

};

class Array{

    Object* arr;
    int size;

    public: 

        Array(){

            arr = new Object[10];
            size = 10;

        }

        Array(Object* arr, int size){

            this->arr = new Object[size];           
            this->size = size;
            for(int i = 0; i < size; ++i){

                this->arr[i] = arr[i];

            }

        }

        Object* GetData(){

           return this->arr;

        }

        void Insert(int a, Object b){

            Object* arr = new Object[size+1];
            for(int i = 0; i < size; ++i){

                arr[i] = this->arr[i];

            }
            
            size++;

            for(int i = size-2; i >= 0; --i){

                if(i == a){

                    arr[i] = b;

                }else if(i > a){

                    arr[i] = arr[i+1];

                }

            }

            delete[] this->arr;            

            this->arr = new Object[size];

            for(int i = 0 ;i < size; ++i){

                this->arr[i] = arr[i];

            }


        }

        
};



int main(){

    Object* arr = new Object[10];
    for(int i = 0; i < 10; ++i){

        arr[i].SetAge(i);

    }
    
    Array obj = Array(arr,10);
    obj.Insert(4,Object(10));
    Object* mat = obj.GetData();
    for(int i = 0; i < 11; ++i){

        cout <<arr[i].GetAge();

    }

    



    return 0;
}