#include <iostream>
using namespace std;
int main(){
     int N,M;
     
    while(true){
          cin>>N>>M;
          if (M <=0 || N <= 0)    {
              break;
          }     
    if(M>N){
     int cal=0;   
    for (int i = N; i <= M; i++){  //2 3 4 5 sum =14 5 6 7 sum =18
        cal +=i;
        cout<<i<<" ";
    }
        cout<<"sum ="<<cal<<endl;
    }else{
     int sum=0;
    for (int i = M; i <= N; i++){
        sum +=i;
        cout<<i<<" ";
    }
      cout<<"sum ="<<sum<<endl;
    }
     }
}
