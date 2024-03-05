#include <iostream>

using namespace std;

int main() {
    int kol = 0;
    const int rows = 10;
    const int cols = 10;
    int arr_no[cols][rows] = { 16, 78, 99, 26, -29, 19, -52, 65, -88, 51,
      -79, -22, 32, -25, -62, -69, -42, -59, -75, 89,
      -87, 95, -22, 85, -49, -75, 76, 73, -59, -52,
       30, 49, -28, -48,  0,  57, 46, -85, 0, -18,
      -97, -21, -95, 64, 22, -12, 69, -84, -11, -71,
      -25, 47, 72, 43, 15, -44, 44, 61, 54, 74,
       88, -61,  0, -64, -83, 97,  0, 90, 15, 28,
      -54, 19, 73, 35, -67, -87, 85, -99, -70, 10,
       98, 58, -10, -29, 95, 62, 77, 89, 36, -32,
       78, 60, -79, -18, 30, -13, -34, -92, 61, -38 };

    
    int** dynamicArray = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        dynamicArray[i] = new int[cols];
    }

    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            dynamicArray[i][j] = arr_no[i][j];
        }
    }

   
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout<<(dynamicArray[i][j]);
        }
    }
    

    for (int i = 0; i < rows; ++i) {
        delete[] dynamicArray[i];
    }
    delete[] dynamicArray;

    return 0;
}

