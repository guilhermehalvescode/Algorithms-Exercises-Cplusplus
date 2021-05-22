#include <bits\stdc++.h> 

using namespace std;

int binarySearch(vector <int> vet, int n, int e){
    int start = 0, mid, end = n - 1;
    while (start <= end)
    {
        mid = (start + end)/2;
        if(vet[mid] == e)
            return mid;
        else if(e > vet[mid])
            start = mid + 1;
        else if(e < vet[mid])
            end = mid - 1;
    }
    return -1;
}

int linearSearch(vector <int> sorted, int e){
    int sortedLenght = sorted.size(), i;
    for(i = 0; i < sortedLenght; i++){
        if(e == sorted.at(i)) return i;
        else if(sorted.at(i) > e) return sortedLenght;
    }
}


// binary search is efficient with large arrays, different from linear, which is inefficient.