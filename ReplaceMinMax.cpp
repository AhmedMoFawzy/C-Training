#include<iostream>
using namespace std; 
int main() {     
       int size;
       cin>>size;
       int arr[size];
       for (int i = 0; i < size; i++)
       {
           cin>>arr[i];
        }
        int min = arr[0] , max = arr[size-1] , index1 =0 ,index2 =size-1;
        for (int i = 0; i < size; i++)
        {
          if (min >arr[i])
          {
            min = arr[i];
            index1 = i;
          }
        }
        for (int i = 0; i < size; i++)
        {
           if (max < arr[i])
          {
            max = arr[i];
            index2 = i;
          }     
           }
      arr[index2] = min;
      arr[index1] = max;
      for (int i = 0; i < size; i++)
      {
        cout<<arr[i]<<" ";
      }
  }
/*
5
4 1 3 10 8
*/