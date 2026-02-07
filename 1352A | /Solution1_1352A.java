import java.util.*;
public class Solution1_1352A{
    public static void main(String args[]){
        Scanner sc =new Scanner(System.in);
        int t =sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int count=0;
            int m=n;
            while(m>0){
                if(m%10!=0){
                    count++;
                }
                m/=10;
            }
            System.out.println(count);
            if(n/10000!=0){
                System.out.print( ((n/10000)*10000)+ " ");
                n-=((n/10000)*10000);
            }
            if(n/1000!=0){
                System.out.print(((n/1000)*1000) + " ");
                n-=((n/1000)*1000);
            }
            if(n/100!=0){
                System.out.print(((n/100)*100) + " ");
                n-=((n/100)*100);
            }
            if(n/10!=0){
                System.out.print(((n/10)*10) + " ");
                n-=((n/10)*10);
            }
            if(n!=0){
                System.out.print(n);
            }
            System.out.println("");
        }
    }
}