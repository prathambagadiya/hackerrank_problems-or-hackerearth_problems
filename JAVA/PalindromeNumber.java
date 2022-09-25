import java.io.*;
public class PalindromeNumber  {
  public static void main(String args[])throws IOException
  {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    System.out.print("Input a number: ");
    int n = Integer.parseInt(br.readLine());
    int sum = 0, r;
	  int temp = n;    
    while(n>0)
    {    
      r = n % 10;   
      sum = (sum*10)+r;    
      n = n/10;    
    }    
    if(temp==sum) 
      System.out.println("It is a Palindrome number.");    
    else    
      System.out.println("Not a palindrome");    
  }  
}
