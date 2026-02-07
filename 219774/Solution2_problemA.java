import java.util.*;
public class Solution2_problemA {
    public static void main(String arg[]){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int[] arr= new int[a];
        for(int i=0; i<a;i++){
            arr[i]= sc.nextInt();
        }

        long sum=0;

        for(int i : arr){
            sum+=i;
        }System.out.print((sum<0?-sum:sum));
    }
}