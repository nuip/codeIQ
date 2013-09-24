#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){
  int i,j,k,pw,max,tmp;
  const int pow65=pow(6,5);

  for(i=0;i<pow65;i++){
    bool f=0;
    max=-1;
    for(j=5,pw=pow65/6;j>0;j--,pw/=6){
      if(max+1<(tmp=i/pw%6))
        f=1;
      if(max<tmp)
        max=tmp;
    }
    if(f)continue;
    for(j=0;j<=max;j++){
      for(k=1,pw=pow65/6;k<=5;k++,pw/=6){
        if(j==i/pw%6)
          cout<<k;
      }
      if(j!=max)cout<<".";
    }
    cout<<endl;
    /*for(j=5,pw=pow65/6;j>0;j--,pw/=6){
      cout<<i/pw%6;
    }cout<<endl;*/
  }

  return 0;
}