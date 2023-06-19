#include<iostream>
#include<vector>
#include<map>
using namespace std;

int almost(vector<int> &a,int b)
{
int i=0;
int j=0;
int count=0;
map<int,int> m;
while(i< a.size()){
m[a[i]]++;
while(m.size()>b){
    auto it =m.find(a[j]);
    it->second--;
    if(it->second == 0) m.erase(it);
    j++;

}
count+=(i-j+1);
i++;
}
return count;
}
int main(){
    vector<int> a;
    int n,b;
    cout<<"number of element"<<endl;
    cin>>n;
    cout<<"enter"<<endl;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        a.push_back(b);
    }
    cout<<"number of distinct"<<endl;
    cin>>b;
    int number = almost(a,b)  - almost(a,b-1);
    cout<<"the number of subarray which have "<< b << "distict element is :" <<number <<endl;
}