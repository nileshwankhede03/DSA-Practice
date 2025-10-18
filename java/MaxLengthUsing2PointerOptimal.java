
public class MaxLengthUsing2PointerOptimal 
{
                                                    // k = 6
    public static int LongestLengthSubArrayOptimal(int[] arr, int k) 
    {
        int left = 0 , right = 0;
        int maxLength = 0;
        int sum = arr[0];
        int size = (arr.length);

        while (right < size ) 
        {            
            while (sum > k) 
            {
                sum -= arr[left];
                left++;
            }

            if(sum == k)
            {
                maxLength = Math.max(maxLength,right-left+1);
            }
            right++;
            if(right < size)
            {
                sum = sum + arr[right];
            }
        }
        return maxLength;
    }
    public static void main(String[] args) 
    {
        int[] arr = {1,2,3,1,1,1,1,3,3};
        int k = 6;

        int iRet = LongestLengthSubArrayOptimal(arr , k);

        System.out.println("Longest length of subarray is : "+iRet);
    }
}

/*
    ( same side 2 pointer approach boiler-plate code)

    int left = 0;
    int right = 0;
    int sum = 0;

    while (right < arr.length)  // 👉 right pointer loop
    {                              
        sum += arr[right];                 // add element to current window

        while (sum > target) // 👉 condition break hoti hai to left move karo
        {             
            sum -= arr[left];
            left++;
        }

        System.out.println("Valid window: [" + left + ", " + right + "] sum = " + sum);

        right++;                           // 👉 fast pointer aage badhao
    }

    @boiler-plate code 

    int left = 0;
    int right = 0;

    while (right < arr.length) 
    {
    // Step 1: Include current element in window
    // (expand window)
    
    // Step 2: Shrink window if condition breaks
    while (/* condition break hoti hai *///) 
    //{
        // window se left element remove karo
        //left++;
    //}

    // Step 3: Process valid window (optional)
    // e.g. print, count, store result

    // Step 4: Move right ahead (expand)
    //right++;
//}

