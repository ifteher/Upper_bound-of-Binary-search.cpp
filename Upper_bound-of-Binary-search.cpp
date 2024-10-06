///Uper Bound holo:kono akta array collection e akta key/required element takok ba na thakok,tar imediet value tai print korbe.
#include<bits/stdc++.h>
using namespace std;
int main()
{
///sudu vector e noy,set,map,multiset(stack,queue chara) soho sob jaigai lower_bound apply korte parben.
 int n;
 cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++)
 {
     cin>>v[i];
 }
 
 ///upper_bound er index ta dekhte:
//auto it=upper_bound(v.begin(),v.end(),4)-v.begin();//4 er uper bound er jonno
//5 er uper bound dilee value:6,r index: 3 dekhato.(0 based vec).
///kono akta val(4 er jaigai 11 dilee) jeta vector e nai,setar upper_bound hobee vector er size ta.
//cout<<it<<endl;
//duplicate value takle o sobceye nicher ta dekhabe.

///value ta dekhte:
auto it=upper_bound(v.begin(),v.end(),4);
cout<<it-v.begin()<<endl;
 cout<< * it<<endl;
return 0;
}

/*
n=6
vector:2 3 4 6 9 10
Index :0 1 2 3 4 5
output:4 er iterator: 3
output:4 er upper_bound er value:6
*/
