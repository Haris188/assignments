#include <iostream>

// 2D array
int main()
{
    arr[][]

    cin << loan_amount;
    cin << no_of_installments;

    // date gathering, calculating and puting them in array arr
    for (row)
    {
        arr[row][0] = row; // sr.no
        arr[row][1] = calculate_due_amount() //due amount
        cin << arr[row][2] // due date
        cin << arr[row][3] // paid amount
        cin << arr[row][4] // paid date
        arr[row][5] = calculate_no_days() // no days
        arr[row][6] = calculate_panelty() // panelty
        arr[row][7] = arr[row][1] - arr[row][3] // balance = due amount - paid amount
    }

    //printing table
    for(i){
        for(j){
            cout << arr[i][j]
        }
    }

    return 0;
}

// 1D - Array
int main(){
     arr[]

    cin << loan_amount;
    cin << no_of_installments;

    // date gathering, calculating and puting them in array arr
    for (row; row = row + 7)
    {
        arr[row][row + 0] = row; // sr.no
        arr[row][row + 1] = calculate_due_amount() //due amount
        cin << arr[row][row + 2] // due date
        cin << arr[row][row + 3] // paid amount
        cin << arr[row][row + 4] // paid date
        arr[row][row + 5] = calculate_no_days() // no days
        arr[row][row + 6] = calculate_panelty() // panelty
        arr[row][row + 7] = arr[row][row + 1] - arr[row][row + 3] // balance = due amount - paid amount
    }

    //printing table
    for(i; i=i+7){
        for(j){
            cout << arr[i][i+j]
        }
    }

    return 0;
}