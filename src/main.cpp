// Copyright 2021 NNTU-CS

int main() {
    int arr[] = {10, 20, 30, 30, 40, 40, 50};
    int len = sizeof(arr) / sizeof(arr[0]);
    int value = 70;

    std::cout << "Method 1: " << countPairs1(arr, len, value) << std::endl;
    std::cout << "Method 2: " << countPairs2(arr, len, value) << std::endl;
    std::cout << "Method 3: " << countPairs3(arr, len, value) << std::endl;

    return 0;
}
