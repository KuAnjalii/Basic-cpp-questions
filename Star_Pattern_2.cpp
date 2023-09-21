/*

*
* *
* * *
* * * *
* * * * *
* * * * * * 
* * * * * * *
* * * * * * * *
* * * * * * * * * 
* * * * * * * * * *
* * * * * * * * * * 
* * * * * * * * *
* * * * * * * * 
* * * * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
for(int i=10; i>0; i--){
    for(int j=11-i; j>0; j--){
        cout<<"* ";
    }
    cout<<endl;
}
for(int i=0; i<10; i++){
    for(int j=i; j<9; j++){
        cout<<"* ";
    }
    cout<<endl;
}
return 0 ;
}
