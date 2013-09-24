#include<iostream>
#include<string>
#include<vector>
typedef std::vector<std::string> S;
int r(int m,int n,S s){
  if(n)
    for(int i=0;i<=m;i++){
      S t=s;
      t[i]+='6'-n;
      r(m+(i==m),n-1,t);
    }
  else
    for(;n<m;)
      std::cout<<s[n++]<<(n+1<m?".":"\n");
}
main(){
  r(0,5,S(5));
}