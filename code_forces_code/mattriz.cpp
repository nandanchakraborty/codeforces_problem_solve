#include <iostream>
using namespace std;

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

class SafeMatrix {
private:
    int matrix[MAX_ROWS][MAX_COLS];

    public:
    int numRows;
    int numCols;

public:
    SafeMatrix(int rows, int cols) {
        numRows = (rows <= MAX_ROWS) ? rows : MAX_ROWS;
        numCols = (cols <= MAX_COLS) ? cols : MAX_COLS;

        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < numCols; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    bool isValidIndex(int row, int col) const {
        return (row >= 0 && row < numRows && col >= 0 && col < numCols);
    }

    int getValue(int row, int col) const {
        if (isValidIndex(row, col)) {
            return matrix[row][col];
        } else {
            cout << "Invalid index. Returning 0." << endl;
            return 0;
        }
    }

    void setValue(int row, int col, int value) {
        if (isValidIndex(row, col)) {
            matrix[row][col] = value;
        } else {
            cout << "Invalid index. Value not set." << endl;
        }
    }
};

int main() {
    int rows, cols;

    cout << "Enter the number of rows (up to 10): ";
    cin >> rows;
    cout << "Enter the number of columns (up to 10): ";
    cin >> cols;

    SafeMatrix matrix(rows, cols);

    cout << "Matrix size is " << matrix.numRows << "x" << matrix.numCols << endl;

    int row, col, value;

    cout << "Enter row index: ";
    cin >> row;
    cout << "Enter column index: ";
    cin >> col;

    cout << "Enter a value to set: ";
    cin >> value;

    matrix.setValue(row, col, value);

    cout << "Value at (" << row << "," << col << ") is: " << matrix.getValue(row, col) << endl;

    return 0;
}

