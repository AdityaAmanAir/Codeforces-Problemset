import java.util.*;
public class Solution1_problemF {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i=0; i<n ;i++){
            arr[i]=sc.nextInt();
        }
        for(int j = n-1; j>-1;j--){
            System.out.print(arr[j]+" ");
        }
    }
}
