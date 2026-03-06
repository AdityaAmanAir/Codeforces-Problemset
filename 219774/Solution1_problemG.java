import java.util.Scanner;
public class Solution1_problemG {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int m=n/2;
        n--;
        for(int i=0;i<m;i++){
            if(arr[i]!=arr[n-i]){
                System.out.println("NO");
                return ;
            }
        }System.out.println("YES");
    }
}
