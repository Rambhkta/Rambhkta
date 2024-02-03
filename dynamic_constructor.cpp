#include<iostream>
#include<string.h>
using namespace std;
class word{
    public :
    char *name;
    int size;
    
    word(){

    }
    word(char *n){
        size=strlen(n);
        name =  new char[size+1];
        strcpy(name,n);
        cout<<name<<" << string is saved!!!";
    
        }
        void show(){
            cout<<"\n Value::- "<<name<<"  len::- "<<size<<endl;
        }
    
};
int main(){

    cout<<"Obj 1 created!!";
    word obj;
    obj.name="swapnil";
        obj.show();
    cout<<"Obj 2 created!!";
    word s2("swapnil madhukar tambe");
    s2.show();
    return 0;
}