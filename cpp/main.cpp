#include <iostream>
#include <vector>
using namespace std;

class Matrix{

private:

int** arr;
int m,n;

public:

Matrix(int m,int n){

	this->m = m;
	this->n = n;

	arr = new int*[m]; 
	    for (int i = 0; i < m; i++){

	        arr[i] = new int[n];			
		
		}

	cout <<"Enter enter elements of the matrix"<<endl;
	for (int i = 0; i < m; i++){

		for (int j = 0; j < n; j++){ 

		    cout << "Inter element " << "[" << i << "][" << j << "]  "; 
		    cin >> arr[i][j]; 

		}

	} 

	for (int i = 0; i < m; i++){

		for (int j = 0; j < n; j++){ 

		    cout << arr[i][j]<<"  "; 

		}

		cout <<endl;

	} 

}

int GetM(){

	return this->m;

}

int GetN(){

	return this->n;

}

// void SetMatrix(){

	//cout <<"Enter enter elements of the matrix"<<endl;

// 	for(int j = 0; j < this->m; ++j){
// 		for(int k = 0; k < this->n; ++k)
// 		{
// 			cin >>this->arr[m][n];
// 		}
// 	}

// }

void SetElement(int m, int n, int el){

	if(m < this->m && n < this->n){
		arr[m][n] = el;
	}
	else{
		cout <<"You have entered wrong positions of the element"<<endl;
	}

}

int GetElement(int m, int n){

	if(m < this->m && n < this->n){
		return arr[m][n];
	}
	else{
		cout <<"You have entered wrong positions of the element"<<endl;
		return 0;
	}

}


};

int main()
{
	
	int c;
	cout <<"Enter matrix count"<<endl;
	cin >>c;
	if (c == 0){
		cout <<"Matrix count need to be > 0"<<endl;
		for(;true;){
			
			cin >>c;
			if(c > 0){
				break;
			}

		}
	
	}
	vector<Matrix> arr;
	int m,n;
	for(int i = 0; i < c; ++i){

		cout <<"Enter size (m,n) of the "<<i<<" matrix"<<endl;
		cin >>m>>n;
		if (m == 0 || n == 0){
	
			for(;true;){
			
				cout <<"Matrix size need to be > 0"<<endl;
				cin >>m>>n;
				if(n > 0 && m > 0){
					break;
				}

			}
	
		}
		arr.push_back(Matrix(m,n));
		
	}
	
	int k,el;
	cout <<"0: Exit\n1: GetElement\n2: SetElement\n3: help"<<endl;
	bool flag = true;


	for(;flag;){

		cin >>c;
		switch(c){

			case 0:
				flag = false;
			break;

			case 1:

				cout <<"Enter number of the matrix and m,n"<<endl;
				cin >>k>>m>>n;
				cout <<"["<<m<<"]"<<"["<<n<<"]= "<<arr[k].GetElement(m,n)<<endl;

			break;

			case 2:

				cout <<"Enter number of the matrix, size (m,n) and element"<<endl;
				cin >>k>>m>>n>>el;
				arr[k].SetElement(m,n,el);
			
			break;

			case 3:

				cout <<"0: Exit\n1: GetElement\n2: SetElement\n3: help"<<endl;

			break;
		}

	}

	


	return 0;
}