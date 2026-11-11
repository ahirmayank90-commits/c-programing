#include<stdio.h>


int* twoSum(int* nums, int numsSize, int target) {
    int output[2];
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                return* output[2]={i,j};
                
            }
        }
    }
}
int main()
{
    int nums[]={1,2,3,4,5};
    int output[]=towSum(nums,5,3,2);
    for(int i=0;i<2;i++){
        printf("%d ",output[i]);
    }
    return 0;
}