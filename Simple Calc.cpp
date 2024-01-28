 #include <iostream>
using namespace std;
int main(){
    int x,y,result=0;
    char op;
    cout<<"Enter First Number: ";
    cin>>x;
    cout<<"Enter Second Number: ";
    cin>>y;
    cout<<"Enter The Operation: ";
    cin>>op;
    switch(op){
        case '+': result = x+y ;
        break;
        case '-': result = x-y ;
        break;    
        case '*': result = x*y ;
        break;
        case '/': result = x/y ;
        break;
        case '%': result = x%y ;
        break;
    }
        cout<<"result = "<<result;
    return 0;
    }
       