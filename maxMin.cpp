#include <iostream>
#include <cstdlib>

int min(unsigned long int a, unsigned long int b) {
    return a <= b ? a : b;
}

void merge1 (unsigned long int *temp, int left, int middle, int right) {
    int i = left, j, k = 0;
    j = middle;
    unsigned long int *answer = new unsigned long int[right - left];
    while(i < middle && j < right) {
        if(temp[i] <= temp[j]) {
            answer[k] = temp[i];
            i++; k++;
        }
        else {
            answer[k] = temp[j];
            j++; k++;
        }
    }
    while(i < middle) {
        answer[k] = temp[i];
            i++; k++;
    }
    while(j < right) {
        answer[k] = temp[j];
            j++; k++;
    }
    for(i = left, j = 0; i < right; i++, j++){
        temp[i] = answer[j];
    }
    delete answer;
}

void mergesort(unsigned long int *numbers, int left, int right) {
    if(right - left < 2) {
        return;
    }
    int middle = left + (right - left)/2;
    mergesort(numbers, left, middle);
    mergesort(numbers, middle, right);
    merge1(numbers, left, middle, right);
}

int main() {
    int n, k, counter = 0;
    std::cin>>n;
    std::cin>>k;
    unsigned long int *store = new unsigned long int[n], answer;
    for(int i = 0; i < n; i++) {
        std::cin>>store[i];
    }
    mergesort(&store[0], 0, n);
    answer = store[k-1] - store[0];
    for(int i = k - 1; i < n; i++) {
        answer = min(answer, store[i] - store[i-k+1]);
    }
    std::cout<<answer<<std::endl;
}
