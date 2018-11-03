#include <iostream>
#include <vector>
#include <string>
using namespace std;

class UserList{

private:

//int id;
int priority;
string name;

public:

UserList(){

    this->priority = 0;
    this->name = "Nigga";

}

UserList(int priority, string name){

    this->priority = priority;
    this->name = name;

}

string GetName(){

    return this->name;

}

// int GetId(){

//     return this->id;

// }

int GetPriority(){

    return this->priority;

}

void SetPriority(int priority){

    this->priority = priority;

}

void SetName(string name){

    this->name = name;

}


    

};

void ShowList(vector<UserList> &hub){
    cout <<hub.size()<<endl;
    for(int i = 0; i < hub.size(); ++i)
        cout <<"Name: "<< hub[i].GetName()<< "  Priority: "<< hub[i].GetPriority()<<endl;
        
}



int main(){
    
    vector<UserList> hub;
    int c,p;
    string name;
    int flag = true;
    for(;flag;){
        cin >> c;
        switch(c){
            case 0:
                
                cout <<"Enter name and priority"<<endl;
                cin >>name>>p;
                hub.push_back(UserList(p,name));
                
                for(int i=1;i<hub.size();i++)     
	                for(int j=i;j>0 && hub[j-1].GetPriority()>hub[j].GetPriority();j--){

                        //hub[j-1].GetPriority() hub[j].GetPriority()
                        int tmp = hub[j-1].GetPriority();
                        hub[j-1].SetPriority(hub[j].GetPriority());
                        hub[j].SetPriority(tmp);

                    }
			            
                break;
            case 1:
                
                 ShowList(hub);
      
                break;
            case 2:
                flag = false;
                break;
        }

    }


    return 0;
}