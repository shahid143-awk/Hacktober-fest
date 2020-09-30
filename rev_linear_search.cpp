#include<iostream>
using namespace std;
int main(){
    int n ; 
    cin>>n;
    int a[n];
    int i ; 
    for( i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    for( i = 0 ; i < n; i++){
        if(a[i]==key){
            cout<<"Element "<<key<<" is present at "<<i<<" index"<<endl;
            break;
        }

    }
    if( i == n){
        cout<<"Element not found!!!"<<endl;
    }

    return 0 ;
}