#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> v;
    v.insert(v.begin(),5);
    v.insert(v.begin()+1,3);
    v.insert(v.begin()+2,8);    
    v.insert(v.begin()+3,1);
    v.insert(v.begin()+4,4);
    v.insert(v.begin()+5,2);    



   for(int i = 0 ; i < v.size()-1 ; i++){
    
      for (int j = 0; j < v.size() - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
   }
}
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}















