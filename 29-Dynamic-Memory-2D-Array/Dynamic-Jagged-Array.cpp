#include <iostream>

int main() {
    int rows;

    // Step 1: Get the number of rows from the user
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    // Step 2: Declare an array of integer pointers (jagged array)
    int** myJaggedArray = new int*[rows];

    // Step 3: Allocate memory for each row based on user input
    for (int i = 0; i < rows; ++i) {
        int rowSize;
        std::cout << "Enter the size of row " << i + 1 << ": ";
        std::cin >> rowSize;

        myJaggedArray[i] = new int[rowSize];
    }

    // Step 4: Assign values to the elements based on user input
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < i + 2; ++j) {
            std::cout << "Enter value for myJaggedArray[" << i << "][" << j << "]: ";
            std::cin >> myJaggedArray[i][j];
        }
    }

    // Step 5: Display the elements
    std::cout << "Jagged Array Elements:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < i + 2; ++j) {
            std::cout << myJaggedArray[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Step 6: Deallocate memory to avoid memory leaks
    for (int i = 0; i < rows; ++i) {
        delete[] myJaggedArray[i];
    }
    delete[] myJaggedArray;

    return 0;
}
