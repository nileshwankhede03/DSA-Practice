
// brute force approach
// which elements appears ( > size/2 )
// here o/p : 2

public class MajorityElements 
{
    public static int BruteForceApproach(int arr[]) 
    {
        for (int i = 0; i < arr.length; i++) 
        {
            int iCnt = 0;

            for (int j = 0; j < arr.length; j++) 
            {
            //  dynamic       static
            // ex arr.length    3 
                if(arr[j] == arr[i]) 
                {
                    iCnt = iCnt + 1;
                }
            }

            if(iCnt > (arr.length/2))   return arr[i];
        }
        return 0;
    }
    public static void main(String[] args) 
    {
        int arr[] = {2,2,3,3,1,2,2};
        

        int iResult = BruteForceApproach(arr);

        System.out.println("Majority element is : "+iResult);
    }
}
