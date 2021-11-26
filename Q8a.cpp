#include <iostream>

using namespace std;

int mirrorPrint(string rows[7][6]){
    for(int i = 0; i <= 5; i++){
        for(int j=1; j <= 6; j++){
            cout << rows[i][j];
        }

        for(int j=6; j >=1; j--){
            cout << rows[i][j];
        }
        cout << endl;
    }

    return 0;
}

int main() {
    string rows[7][6] = {};
    int i = 0;
    while(i <= 5){
        int j=1;

        while(j <= 6){
            if(i < j){
                rows[i][j] = "!!";
            }
            else{
                string backslash = "\\\\";
                rows[i][j] = backslash;
            }

            if(j==6){
                rows[i][j] = rows[i][j][0];
            }

            j++;
        }
        i++;
    }

    mirrorPrint(rows);

    return 0;
}
