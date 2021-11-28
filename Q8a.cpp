#include <iostream>

using namespace std;

int main() {
    int i = 1;
    int threshold = 0;

    while(i<=6){
        int j=1;

        while(j<=22){
            if(j<=threshold){
                cout << '\\';
            }
            else if (j >(22 - threshold)){
                cout << '\\';
            }
            else{
                cout << '!';
            }

            j++;
        }

        cout << '\n';
        threshold = threshold + 2;
        i++;
    }    

    return 0;
}
