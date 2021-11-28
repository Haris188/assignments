#include <iostream>
#include <math.h> 

using namespace std;

int f(int x, int n){
    return pow(x,n) + pow(x, (n-1));
}

int main() {
    // inputs
    int x_arg = 3;
    int n_arg = 2;

    for(int i = x_arg; i>=0 ; i--){
        int x_coord = i;
        int y_coord = f(i, n_arg);

        // graph ploting after this

        // If number on y axis label is smaller that 10, add 0 before it, eg: 4 becomes 04
        if(y_coord < 10){
            cout << 0;
        }
        
        cout << y_coord;

        
        // printing the point on graph
        for(int x = 0; x<=x_coord; x++){
            if(x == x_coord){
                cout << '*';
            }
            else{
                cout << ' ';
            }
        }

        cout << '\n';

        // Printing numbers on y axis for no x value
        for(int i = y_coord - 1; i> f(x_coord - 1, n_arg); i--){
            if(i < 10){
                cout << 0;
            }

            cout << i;
            cout << '\n';
        }
    }


    // Printing x-axis
    cout << "  ";
    for(int i = 0; i <= x_arg; i++){
        cout << i;
    }

    return 0;
}
