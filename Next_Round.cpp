#include<string>
#include<vector>
#include<cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main(){

  int n, k, count=0;
  cin>>n;
  cin>>k;
  int scores[n];
  int max=150;
  for(int i=0; i<n; i++){
      cin>>scores[i];
      while (scores[i]>max){
        cout<<"Please enter a lowest number:"<<endl;
        cin>>scores[i];
      }
      max=scores[i];
    }
    if(scores[k-1]>0){
     int indexPoint=k-1;
     int r=indexPoint;
   for(int s=r; s<n; s++){
     if(scores[s]==scores[indexPoint]){
        indexPoint=s;
        //u=indexPoint;
        }
   }
     for(int result=0; result<=indexPoint; result++){
       if(scores[result]>0){
        count++;
        }
      }
    }else if(scores[k-1]==0){
         int indexPointz=k-1;
     int r=indexPointz;
   for(int s=r; s>=0; s--){
     if(scores[s]==scores[indexPointz]){
        indexPointz=s;
        //u=indexPoint;
        }
   }
   for(int result=0; result<=indexPointz; result++){
       if(scores[result]>0){
        count++;
        }
      }
    }
         cout<<count<<endl;
    return 0;
}
//IbraMAINeem
