#include<iostream>
#include<string>
int i,j,p,m,t;main(){std::string s[6];for(;i<7776;i++){for(j=-6,m=-1,p=1296;++j;s[t]+=j+'6',p/=6)if(m<(t=i/p%6))m-=9*(++m<t),s[t]="";for(;j<=m;)std::cout<<s[j++]<<(j<m?".":"\n");}}