#include <iostream>

using namespace std;

int triangle[9][9] = {};

int createTriangle(){
    for(int i = 0; i <= 8; i++){
        for(int j = 0; j<=8; j++){
            if(i<=j){
                triangle[i][j] = (j+1)-i;
            }
            else{
                triangle[i][j] = 0;
            }
        }
    }

    return 0;
}

int main() {
   createTriangle();

   for(int i = 8; i >= 0; i--){
       for(int j = 0; j<=8; j++){
           if(triangle[i][j] != 0){
               cout << triangle[i][j];
           }
           else {
               cout << ' ';
           }
       }

       for(int j = 7; j>=0; j--){
           if(triangle[i][j] != 0){
               cout << triangle[i][j];
           }
           else {
               cout << ' ';
           }
       }
       cout << endl;
   }

   for(int i = 1; i <= 8; i++){
       for(int j = 0; j<=8; j++){
           if(triangle[i][j] != 0){
               cout << triangle[i][j];
           }
           else {
               cout << ' ';
           }
       }
       cout << endl;
   }

   return 0;
}
