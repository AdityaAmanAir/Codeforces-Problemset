import java.util.Scanner;
public class Solution1_problemH{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int b=0;
        boolean flag =true;
        while(flag){
            flag=false;
            for(int i=0;i<n;i++){
                for(int j=0;j<(n-i-1);j++){
                    if(arr[j]>arr[j+1]){
                        b=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=b;
                        flag=true;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    }
}