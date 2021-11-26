#include <iostream>

using namespace std;

char triangle[7][7] = {};
string rectangle[7][8] = {};

int createTriangle(){
    for(int i = 0; i <= 6; i++){
        for(int j = 0; j<=6; j++){
            if(i<j){
                triangle[i][j] = '*';
            }
            else{
                triangle[i][j] = ' ';
            }
        }
    }

    return 0;
}

int createRectangle(){
    for(int i = 0; i <=6; i++){
        for(int j = 0; j<= 6; j++){
            if(j < i){
                string backslash = "\\\\";
                rectangle[i][j] = backslash;
            }
            else if(j> i){
                string forwardslash = "//";
                rectangle[i][j] = forwardslash;
            }
        }
    }
}

int main() {
    createTriangle();
    createRectangle();

    for(int i = 0; i <= 6; i++){
        for(int j = 6; j>=0; j--){
            cout << triangle[i][j];
        }

        for(int j = 7; j>=0; j--){
            cout << rectangle[i][j];
        }

        for(int j = 0; j<=6; j++){
            cout << triangle[i][j];
        }

        cout << endl;
    }

   return 0;
}
