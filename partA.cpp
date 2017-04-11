#include<vector>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main(){
int number,total=0;
ifstream inFile("testfile",ios::in);
inFile>>number;
vector<int>v(number);
for(int i=0;i<number;++i){
inFile>>v.at(i);
}
sort(v.begin(),v.end());
for(int j=0;j<5;++j){
total+=v.at(number-1-j);
}
cout<<total<<endl;

return 0;
}
