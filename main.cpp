#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void print_grid(std::vector<std::string> sudoku);

int main(){
    vector<string> sudoku = {};

    cout << "Welcome to sudoku solver!\nPlease input the sudoku to be solved row by row! 0 for an empty square\n";

    // Get input data from user
    for (int i = 0; i < 9; i++){
        string row;
        cout << "\nGive the " << i+1 << ". row of the sudoku: ";
        cin >> row;
        sudoku.push_back(row);
    }

    print_grid(sudoku);
    
    return 0;
}

void print_grid(std::vector<std::string> sudoku){
    for (int i = 0; i < sudoku.size(); i++){
        if(i != 0 && i % 3 == 0){
            cout << "\n----------------------";
        }
        cout << "\n";

        for (int j = 0; j < sudoku[i].size(); j++){
            if(j != 0 && j % 3 == 0){
                cout << "| ";
            }
            cout << sudoku[i][j] << " ";
        }
    }
    cout << "\n";
}