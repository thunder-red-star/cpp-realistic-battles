#include "main.h"
#include <iostream>

int main() {
    std::cout << "multiplication table!" << std::endl;
    std::cout << "x size" << std::endl;
    std::int16_t xDim = -1;
    while (xDim <= 0) {
        std::cin >> xDim;
    }
    std::cout << "y size" << std::endl;
    std::int16_t yDim = -1;
    while (yDim <= 0) {
        std::cin >> yDim;
    }
    std::string multiplicationTable;
    multiplicationTable = "x\t";
    // row 1
    for (int16_t dim = 0; dim < xDim; dim++) {
        multiplicationTable += std::to_string(dim + 1);
        if (dim < xDim - 1) {
            multiplicationTable += "\t";
        }
    }
    multiplicationTable += "\n";
    // rest of rows
    for (int16_t dimX = 0; dimX < yDim; dimX++) {
        std::string multiplicationTableRow;
        multiplicationTableRow = std::to_string(dimX + 1) + "\t";
        // row 1
        for (int16_t dimY = 0; dimY < yDim; dimY++) {
            multiplicationTableRow += std::to_string((dimY + 1) * (dimX + 1));
            if (dimY < yDim - 1) {
                multiplicationTableRow += "\t";
            }
        }
        multiplicationTableRow += "\n";
        multiplicationTable += multiplicationTableRow;
    }
    std::cout << "here you go:" << std::endl;
    std::cout << multiplicationTable << std::endl;
    return 0;
}