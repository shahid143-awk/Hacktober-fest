#include <iostream>
using namespace std;

char keypad[][10] = {"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};


void generate(char *inp, char *out,int i , int j ){
    // base case
    if(inp[i] == '\0'){
        out[j] ='\0';
        cout<<out<<endl;
        return ; 
    }
    int digit = inp[i] - '\0';
    if(digit == 1 || digit == 0){
        generate(inp,out,i+1,j);
    }

    for(int k = 0 ; keypad[digit][k]!='\0';k++){
        out[j]=keypad[digit][k];
        generate(inp,out,i+1,j+1);
    }
    return ;
}
int main() {
   char inp[100];
   cin>>inp;
   char out[100];
  generate(inp,out,0,0);
   return 0;


}

