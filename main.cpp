#include <iostream>
using namespace std;

class Vector {

public:

	int size;
	int *arr;

	Vector() {

		arr = new int[5];

	}

    Vector(int size) {

		this->size = size;
		this->arr = new int[this->size];

	}


	Vector(int size, int *arr) {

		this->size = size;
		for (int i = 0; i < this->size; ++i) {

			this->arr[i] = arr[i];

		}

	}


	Vector operator = (const Vector  &v) {
		
		//for (int i = 0; i < this->size; ++i) {
		//	this->arr[i] = v.arr[i];
		//	cout << this->arr[i] << endl;
		//}

		return Vector(this->size=v.size,this->arr = v.arr);
	}

	Vector operator ++ (int) {
		
        int* arr = new int[this->size];
        int size = this->size + 1;
        for(int i = 0; i < size - 1; ++i){

            arr[i] = this->arr[i];

        }
		delete [] this->arr;
        this->arr = new int[size];
        for(int i = 0; i < size - 1; ++i){

            this->arr[i] = arr[i];

        }

        return Vector(this->size = size,this->arr);


	}


};



int main()
{
	Vector v1 = Vector();
	Vector v2 = Vector();
	for (int i = 0; i < 5; ++i) {

		v1.arr[i] = i * 2;
		v2.arr[i] = i * 3;

	}

	for (int i = 0; i < 5; ++i) {

		cout << v1.arr[i] << endl;

	}
	cout << "\n\n" << endl;

	for (int i = 0; i < 5; ++i) {

		cout << v2.arr[i] << endl;

	}

	cout << "\n\n" << endl;

	v1 = v2;
    cout <<"asdasd"<<endl;
	for (int i = 0; i < 5; ++i) {
	
		cout << v1.arr[i] << endl;
	
	}
    cout <<"asdasd2"<<endl;
	
    v1++;

	cout << v1.size <<endl;
    cout <<"asdasd3"<<endl;
	// for (int i = 0; i < v1.size; ++i) {

	// 	cout << v1.arr[i] << endl;

	// }

	return 0;
}