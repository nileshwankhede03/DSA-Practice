public class MeriMarziKiPractice 
{
    public static void DutchBruteForceApproch(int arr[]) 
    {
        int iCount0 = 0;
        int iCount1 = 0;
        int iCount2 = 0;

        for (int i = 0; i < arr.length; i++) 
        {
            if(arr[i] == 0) iCount0++;
            else if(arr[i] == 1)    iCount1++;
            else if(arr[i] == 2)    iCount2++;
        }

        System.out.println("Length of 0 is : "+iCount0); // 5
        System.out.println("Length of 1 is : "+iCount1); // 4
        System.out.println("Length of 2 is : "+iCount2); // 2

        //      0           5
        for (int i = 0; i < iCount0; i++) 
        {
            arr[i] = 0;
        }

        //.     5                  9
        for (int i = iCount0; i < (iCount0 + iCount1); i++) 
        {
            arr[i] = 1;
        }
//              9                            11
        for(int i = (iCount0 + iCount1); i < arr.length; i++) 
        {
            arr[i] = 2;
        }

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+" ");
        }

        System.out.println();
    }
    public static void main(String[] args) 
    {
        int arr[] = {0,1,1,0,1,2,1,2,0,0,0};

        DutchBruteForceApproch(arr);
    }
}

