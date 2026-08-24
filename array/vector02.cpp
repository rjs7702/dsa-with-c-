// vector function
#include<iostream>
#include<climits>
#include<vector>

 using namespace std;
 int main(){
   vector<int> vec;//null vector
   cout<<"size= "<<vec.size()<<endl;
   vec.push_back(25);
   vec.push_back(67);
   vec.push_back(287);
   vec.push_back(255);
  
   vec.pop_back();
    cout<<"size= "<<vec.size()<<endl;
   cout<<vec.front()<<endl;
   cout<<vec.back()<<endl;
   cout<<vec.at(1)<<endl;
   vec.insert(vec.begin() + 1, 78);
   vec.erase(vec.begin() + 3);
  

  //  for(int i:vec){
  //   cout<<i<<endl;
  //  }
 }
  	
