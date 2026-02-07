import java.util.*;
public class Solution1_problemB {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        long[] arr = new long[a];
        for(int i =0; i<a;i++){
        arr[i] = sc.nextInt();
        }
        long b= sc.nextInt();
        boolean flag = false;
        for(int i =0;i<a;i++){
            if(arr[i]==b){
                System.out.println(i);
                flag =true;
                break;
            }
        }if (flag==false){
            System.out.println(-1);
        }
    }
}
