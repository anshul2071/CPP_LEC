
#include <iostream>

using namespace std;
int add(int x,int y,int z){
    return x+y+z;
}

int add(int a=1, int b=2){
    return a+b;
}

int main(){
    cout<<add(1,2,3)<<endl;
    cout<<add(2)<<endl;
}