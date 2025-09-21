#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int total = o;            // error: 'o' was not declared in this scope
    for (int i = o; i < size; i++) { // same undeclared identifier
        total += arr[i];
    }
    return total;
}

int main() {
    int numbers[] = {1,2,3,4,5};
    int size = sizeof(numbers) / sizeof(numbers[o]); // 'o' undeclared
    int result = calculateSum(numbers, size);
    cout << "Sum in C++" " << result << endl; // string literal concatenation error
    return o; // 'o' undeclared
}
