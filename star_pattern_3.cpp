/*
                  *
                * * *
              * * * * * 
            * * * * * * * 
          * * * * * * * * * 
        * * * * * * * * * * *
      * * * * * * * * * * * * * 
    * * * * * * * * * * * * * * * 
  * * * * * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * * * * * 
  * * * * * * * * * * * * * * * * * 
    * * * * * * * * * * * * * * * 
      * * * * * * * * * * * * *
        * * * * * * * * * * * 
          * * * * * * * * * 
            * * * * * * * 
              * * * * *
                * * * 
                  *
  */


#include<bits/stdc++.h>
using namespace std;

int main() {
for(int i=19; i>0; i--){
    
    for(int j=0; j<i/2; j++){
        cout<<"  ";
    }
    for(int k=19-i;k>-1; k-- ){
        cout<<"* ";
        k--;
    }
    for(int k=18-i;k>-1; k-- ){
        cout<<"* ";
        k--;
    }
    
   cout<<endl;
   i--;
}
for(int i=1; i<20; i++){
    
    for(int j=0; j<i/2; j++){
        cout<<"  ";
    }
    for(int k=19-i;k>-1; k-- ){
        cout<<"* ";
        k--;
    }
    for(int k=18-i;k>-1; k-- ){
        cout<<"* ";
        k--;
    }
    
   cout<<endl;
   i++;
}
return 0 ;
}



/*

                  * 
                * * *
              * * * * * 
            * * * * * * *
          * * * * * * * * *
        * * * * * * * * * * *
      * * * * * * * * * * * * *
    * * * * * * * * * * * * * * *
  * * * * * * * * * * * * * * * * *
* * * * * * * * * * * * * * * * * * * 
  * * * * * * * * * * * * * * * * * * *
    * * * * * * * * * * * * * * * * *
      * * * * * * * * * * * * * * *
        * * * * * * * * * * * * *
          * * * * * * * * * * *
            * * * * * * * * * 
              * * * * * * *
                * * * * *
                  * * *
                    *


*/


/*

#include<bits/stdc++.h>
using namespace std;

int main() {
for(int i=19; i>0; i--){
    
    for(int j=0; j<i/2; j++){
        cout<<"  ";
    }
    for(int k=19-i;k>-1; k-- ){
        cout<<"* ";
        k--;
    }
    for(int k=18-i;k>-1; k-- ){
        cout<<"* ";
        k--;
    }
    
   cout<<endl;
   i--;
}
for(int i=1; i<20; i++){
    
    for(int j=0; j<i/2+1; j++){
        cout<<"  ";
    }
    for(int k=17-i;k>-1; k-- ){
        cout<<"* ";
        k--;
    }
    for(int k=19-i;k>-1; k-- ){
        cout<<"* ";
        k--;
    }
    
   cout<<endl;
   i++;
}
return 0 ;
}

*/
