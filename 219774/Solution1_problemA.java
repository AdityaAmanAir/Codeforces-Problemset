import java.util.*;
public class Solution1_problemA {
    public static void main(String arg[]){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        long sum=0;
        for(int i =0; i<a;i++){
            int b = sc.nextInt();
                sum+=b;
        }System.out.print((sum<0?-sum:sum));
    }
}
