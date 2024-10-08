//二分查找(折半查找):要求数组必须是有序的(升序或降序，可以不连续)

#include <stdio.h>

int binarySearch(int A[], int n, int key)
{
    int left = 0, right = n-1;
    while(left <= right){
        int mid = left + (right-left)/2;
        if(key < A[mid]){        //目标key在左半区间
            right = mid-1;
        }else if(key > A[mid]){  //目标key在右半区间
            left = mid+1;
        }else{                   //key == mid
            return mid;
        }
    }
    return -1;
}

int main()
{
    int A[] = {1,20,27,59,71,88,100,3702,10247};  
    int n = sizeof(A)/sizeof(A[0]);
    while(1){
        int key;
        printf("请输入要查找的数字: ");
        scanf("%d",&key);
        int pos = binarySearch(A,n,key);
        printf("pos = %d\n", pos);
    }
    return 0;
}
