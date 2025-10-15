import java.util.*;

public class DutchAlgorithm 
{
    public static void DutchAlgorithmSolutionToSort(int arr[])
    {
        int low = 0;
        int mid = 0;
        int high = arr.length - 1;

        while( mid <= high) 
        {
            if(arr[mid] == 0)
            {
                int temp = arr[mid];
                arr[mid] = arr[low];
                arr[low] = temp;

                low++;
                mid++;
            }
            else if(arr[mid] == 1)
            {
                mid++;
            }
            else if(arr[mid] == 2)
            {
                int temp = arr[mid];
                arr[mid] = arr[high];
                arr[high] = temp;

                high--;
            }
        }

        for(int i = 0; i < arr.length; i++) 
        {
            System.out.print(arr[i]+" ");
        }

        System.out.println();
    }
    
    public static void main(String[] args) 
    {
        int arr[] = {0,1,1,0,1,2,1,2,0,0,0};
        //           0 0 0 0 0 1 1 1 1 2 2 
        DutchAlgorithmSolutionToSort(arr);
    }
}

// red : 0 
// white : 1
// blue : 2
