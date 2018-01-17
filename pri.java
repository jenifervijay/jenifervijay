import java.util.*;
class pri
{
public static void main(String args[]);
{
    int n, i, flag = 0;
    Scanner s=new Scanner(system.in);
    System.out.printl("enter the positive number");
    n=s.nextInt();
 for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        System.out.println("prime number");
    else
        System.out.println("not a prime number");
   
}
