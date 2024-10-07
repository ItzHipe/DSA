#include <iostream>

using namespace std;

void sorting(int arr[], int n, int choice) {
    int temp;

    cout << "\nPerforming sorting...\n";

    switch (choice) {
        case 1: // Bubble Sort
            cout << "Bubble Sort in progress...\n";
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                    if (arr[j] > arr[j + 1]) {
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            cout << "Bubble Sort completed.\n";
            break;

        case 2: // Selection Sort
            cout << "Selection Sort in progress...\n";
            int min_idx;
            for (int i = 0; i < n - 1; i++) {
                min_idx = i;
                for (int j = i + 1; j < n; j++) {
                    if (arr[j] < arr[min_idx]) {
                        min_idx = j;
                    }
                }
                if (min_idx != i) {
                    temp = arr[i];
                    arr[i] = arr[min_idx];
                    arr[min_idx] = temp;
                }
            }
            cout << "Selection Sort completed.\n";
            break;

        default:
            cout << "Invalid choice. Please enter 1 for Bubble Sort or 2 for Selection Sort.\n";
    }
}

int main() {
    int n, choice;

    cout << "\n=========================================================\n";
    cout << "Welcome to the Sorting Algorithm Selector!\n";
    cout << "=========================================================\n\n";

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "\nEnter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\n=========================================================\n";
    cout << "Choose your sorting algorithm:\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Selection Sort\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "\n=========================================================\n";

    sorting(arr, n, choice);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}