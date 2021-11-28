// FOLLOWED THIS METHOD: https://www.youtube.com/watch?v=FFDMzbrEXaE

#include <iostream>

using namespace std;

string converToBinary(int x){
    int divided = x;
    string converted = "";
    string reverseString = "";

    while(divided >=1){
        int reminder = divided % 2;
        divided = divided / 2;
        converted = to_string(reminder) + converted;
    }

    return converted;
}

string converToOctal(int x){
    // implement
}

string converToHexa(int x){
    // implement
}

int main() {
   for(int i = 1; i <= 256; i++){
       cout << converToBinary(i);
       cout << '\n';
   }
   
   for(int i = 1; i <= 256; i++){
       cout << converToOctal(i);
   }

   for(int i = 1; i <= 256; i++){
       cout << converToHexa(i);
   }
}
