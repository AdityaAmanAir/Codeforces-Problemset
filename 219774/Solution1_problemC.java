import java.util.*;
public class Solution1_problemC {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        for(int i=0; i<a;i++){
            int b = sc.nextInt();
            if(b>0){
                System.out.print(1+" ");
            }else if(b<0){
                System.out.print(2+" ");
            }else{
                System.out.print(0+" ");
            }
        }
    }
}