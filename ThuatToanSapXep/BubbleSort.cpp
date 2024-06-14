#include <stdio.h>
#include <stdbool.h>
 
void swap(int* a, int* b)
{
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}
 
void BubbleSort(int arr[], int N)
{
   int i, j;
   for (i = 0; i < N; i++)
   {
       for (j = N-1; j > i; j--)
       {
           if(arr[j] < arr[j-1])
               swap(&arr[j], &arr[j-1]);
       }
   }
}
 
void printArr(int arr[], int N)
{
   int i;
   for (i = 0; i < N; i++)
   {
       printf("%d\t", arr[i]);
   }
}
 
int main(void) {
  int n;
    do{
        printf("\nNhap vào so luong phan tu co trong mang: ");
        scanf("%d", &n);
    }while(n <= 0);
      
    int a[n];
      
    for(int i = 0;i < n;i++){
        printf("a[%d] = ",i);
       scanf("%d",&a[i]);
    };
  
    BubbleSort(a, n);
  
    printf("Mang sau khi duoc sap xep: \n");
    printArr(a, n);
  
    printf("\n---------------------------------------\n");

}
