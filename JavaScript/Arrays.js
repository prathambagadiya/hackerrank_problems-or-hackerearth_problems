

/**
*   Return the second largest number in the array.
*   @param {Number[]} nums - An array of numbers.
*   @return {Number} The second largest number in the array.
**/
function getSecondLargest(nums) {
     
     let max1=-1;
     for(let i=0; i<nums.length; i++)
     {
         if(nums[i]>=max1)
        { max1=nums[i];
        }
     }

     let max2=-1;
     for(let i=0; i<nums.length; i++)
     {
         if(nums[i]>max2 && nums[i]!=max1)
        { max2=nums[i];
        }
     }


    return max2;
        // Complete the function
}

