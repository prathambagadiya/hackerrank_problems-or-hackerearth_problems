import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
		System.out.print("Enter the number of terms: ");
		int n=sc.nextInt();
		System.out.print("Fibonacci Series: ");
		int a=0,b=1,next;
		for(int i=1;i<=n;i++){
		    if(i==1){
		        System.out.print(a+" ");
		    }
		    else if(i==2){
		        System.out.print(b+" ");
		    }
		    else{
		        next=a+b;
		        a=b;
		        b=next;
		        System.out.print(next+" ");
		    }
		}
	}
}

