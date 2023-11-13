/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i = 0,j = 1;
    int* res;
    res=(int*)malloc(sizeof(int)*2);
    while ( i < numsSize -1 ){
        while ( j < numsSize){
            if ( i != j && (nums[i]+nums[j] == target) )
                {
                    res[0]=i;
                    res[1]=j;
                    *returnSize = 2;
                    return(res);
                }
            j++;
        }
        i++;
    }
    *returnSize = 0;
    free(res);
    return (NULL);
}