/*Question: Write a program to take
integer as input and print half of the number.*/

/*#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    float y=(float)x;    
    cout<<y/2;
}*/

/*Question: Write a program to take float input
and print the fractional part of the real number.*/

/*#include<iostream>
using namespace std;    
int main(){
    float x;
    cin>>x;
    int y=(int)x;    
    if(y<0) y=y-1;  // for negative numbers we need to subtract 1 from the integer part to get the correct fractional part
    cout<<x-y;
}*/



/*Ques: What is the result of the following code 
  fragment?*/

/*#include<iostream>
using namespace std;
int main(){
    int num1;
    int p=5, q=10;
     p += q -= p;  // isme right to left associativity
    cout<<p<<" "<<q<<endl;
    return 0;
}*/

#include<iostream>
using namespace std;
int main(){
    int i=2,j=3,k,l;
    float a,b;
    k=i/j*j;//  2/3*3 -> 0*3 -> 0
    l=j/i*i;//  3/2*2 -> 1*2 -> 2
    a=i/j*j;//  2/3*3 -> 0*3 -> 0.0
    b=j/i*i;//  3/2*2 -> 1*2 -> 2.0
    cout<<k<<" "<<l<<" "<<a<<" "<<b<<endl;
    return 0;
}