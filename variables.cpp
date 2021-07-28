#include <iostream>
//using declarative
using namespace std;

int main(){
    int slices;
    cout<< "How many slices of pizza do you eat?"<<std::endl;
    cin>> slices;
    //slices<=25?cout<< "Few slices of pizza"<<endl:cout<<"A lot of pizza"<<endl;
    cout<<"You have eaten "<<slices<<" slices of pizza"<<endl;
    return 0;
}
