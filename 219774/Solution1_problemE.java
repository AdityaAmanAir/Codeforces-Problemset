import java.util.*;
public class Solution1_problemE {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        // int arr[]= new int[n];
        int place = 0;
        int a;
        int minn= 100001; //Because the constrain is "Second line contains N numbers (-10^5  ≤  Ai  ≤  10^5)."
        for(int i = 0 ; i<n ; i++){
             a=sc.nextInt();
            if (a<minn){
                minn=a;
                place=i;
            }
        }
        System.out.println(minn+" "+(place+1));
    }
}
