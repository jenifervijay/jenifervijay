import java.util.Scanner;

public class pal
{
    public static void main(String args[])
    {
        int num, rem, or, rev=0;
        Scanner s= new Scanner(System.in);
		
        System.out.print("Enter a Number : ");
        num = s.nextInt();
		
        or = num;
		
        while(num != 0)
        {
            rem = num%10;
            rev = rev*10 + rem;
            num = num/10;
        }
         if(rev==or)
        {
            System.out.print("This is a Palindrome Number");
        }
        else
        {
            System.out.print("This is not a Palindrome Number");
        }
    }
}
