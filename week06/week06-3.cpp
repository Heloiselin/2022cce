int removeDuplicates(int* nums, int numsSize){
    //今天教：指標就是陣列，陣列就是指標
    int k=1;
    for(int i=1; i<numsSize; i++)
    {
        if(nums[i-1]==nums[i])
        {

        }
        else
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
