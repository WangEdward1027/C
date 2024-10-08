//二分查找(折半查找):要求数组必须是有序的(升序或降序，可以不连续)

#include <stdio.h>

//1.循环实现
int binarySearchIterative(int A[], int n, int key)
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

//2.递归实现
int binarySearchRecursive(int A[], int left, int right, int key)
{
    //递归出口
    if(left > right)    return -1;
    //递归公式
    int mid = left + (right-left)/2;
    if(key < A[mid]){        //目标在左半区间
        return binarySearchRecursive(A, left, mid-1, key);
    }else if(key > A[mid]){  //目标值在右半区间
        return binarySearchRecursive(A, mid+1, right, key);
    }else{                   //目标值 == A[mid]
        return mid;
    }
}

int main()
{
    int A[] = {1,20,27,59,71,88,100,3702,10247};  
    int n = sizeof(A)/sizeof(A[0]);
    while(1){
        int key;
        printf("请输入要查找的数字: ");
        scanf("%d",&key);
        int posI = binarySearchIterative(A,n,key);
        int posR = binarySearchRecursive(A,0,n-1,key);
        printf("posI = %d\n", posI);
        printf("posR = %d\n", posR);
    }
    return 0;
}
