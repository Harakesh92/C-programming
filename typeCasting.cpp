#include<iostream>
using namespace std;
int main(){
// int ,float, double, char, bool ->type casting
    float x=3.14;
    int y = (int)x; 
    cout<<y<<endl;
    char ch = 'a';
    int asciiValue = (int)ch;
    cout<<asciiValue<<endl;
    cout<<(int)ch+100<<endl;
    bool p = true;
    int q = (int)p;
    cout<<q<<endl;
    return 0;

}