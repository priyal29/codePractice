/*
 * Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Example 1:

Given nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.

It doesn't matter what you leave beyond the returned length.
*/
int removeDuplicates(int* nums, int numsSize){
    if(numsSize > 0){
        int result = 0;
        int temp = nums[0];
        nums[result] = nums[0];
        int i; 
        for(i=1; i<numsSize; i++){
            if(nums[i] != temp){
                result++;
                nums[result] = nums[i];
                temp = nums[i];
            }
        }
        return result + 1;
    }else{
        return 0;
    }

}
