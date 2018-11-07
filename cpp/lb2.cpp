#include <iostream>
#include <string>

using namespace std;

class Digit{
    
    public:
        int a,b;
    
	Digit(){
	    a = -1,b = -1;
	}
	Digit(int a, int b){
	   
	    this->a = a;
	    this->b = b;
	    
	}
	
	int Add(){
        
	    return a + b;
        cout <<endl;

	}
	
	int Min(){

	    return a - b;
        cout <<endl;

	}
	
	int Mult(){

	    return a * b;
        cout <<endl;

	}
	
	int Div(){

	    return a / b;
        cout <<endl;

	}
	
	int Ost(){
        
	    return a % b;
        cout <<endl;

	}
};


bool Validate(double a){

	bool fst = false, sec = false ;
	int b;

	for(;true;){	
		fst = false, sec = false;
		b = (int)a;
		if (a != (double)b){
			
			fst = true;
	
		}
		if (a >= 0){
		
			sec = true;

		}
		if (fst == true && sec == true){

			cout <<"Digit is >= 0 and isn't int type(Please enter it again)"<<endl;
			return true;
		
		}
		else if(fst == true){
		
			cout <<"Digit must be int type(Please enter it again)"<<endl;
			return true;
		
		}
		else if(sec == true){
	
			cout <<"Digit must be <= 0(Please enter it again)"<<endl;
			return true;

		}
		else if(fst == false && sec == false){

			return false;
		
		}
	}


}


int main()
{
    
	cout<<"Enter a,b"<<endl;    
   
    int a,b;
    double x,y;
    cin >>x>>y;
	cout <<"Validation for 1st digit"<<endl;
    for(;Validate(x);){
    	cin >> x;
    }
    	cout <<"\n\nValidation for 2nd digit"<<endl;
    for(;Validate(y);){
    	cin >> y;
    }
    a = x;
    b = y;
    bool flag = true;
  
  Digit obj(a,b);
  int c;
  cout <<"Chose your operation\n0: exit\n1: +\n2: -\n3: *\n4: /\n5: %\nAny digit: Help\n"<<endl;
  
    for(;flag;){
        cin >>c;
        
        switch(c){
        
        case 0:
            flag = false;
        break;
        
        case 1:
            cout <<obj.Add()<<endl;
        break;
        
        case 2:
            cout <<obj.Min()<<endl;
        break;
        
        case 3:
            cout <<obj.Mult()<<endl;
        break;
        
        case 4:
             cout <<obj.Div()<<endl;
        break;
        
        case 5:
             cout <<obj.Ost()<<endl;
        break;
        
        default:
             cout <<"Chose your operation\n0: exit\n1: +\n2: -\n3: *\n4: /\n5: %\nAny digit: Help\n"<<endl;
        break;
        
        }
    
    
    }

 return 0; 
}