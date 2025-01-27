#include <stdio.h>

int main() {
    int n, i, arr[100];
    scanf("%d", &n);
    
    for(int i=0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("\n-----------As Inputed--------------\n");

    for(int i=0; i<n; i++){
        printf("%d  ", arr[i]);
    }
    
    printf("\n-----------Reverse--------------\n");
    
    for(int i=n-1; i>=0; i--){
        printf("%d  ", arr[i]);
    }
    
    return 0;
}

