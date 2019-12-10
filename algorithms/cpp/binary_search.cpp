#include <stdio.h>

int binary_search(int array[], int n, int x){
    if (n == 0) return -1;

    int low = 0, high = n - 1;

    while (low <= high){
        int mid = low + (high - low)/2;
        
        if (array[mid] == x)
            return mid;
        if (x < array[mid])
            high = mid - 1;
        else // x > array[mid]
            low = mid + 1;
    }

    return -1;
}

int main(int argc, char const *argv[]){
    int x;
    int array[] = {4, 11, 17, 20, 22, 23, 31, 32, 33, 41};
    
    scanf("%d", &x);
    printf("Element found at index %d\n", binary_search(array, 10, x));
    return 0;
}