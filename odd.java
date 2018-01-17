import java.util.*;
class odd
{
   int i, n;
   Scanner s=new Scanner(System.in);
   System.out.println("enter the number");
    n=s.nextInt();
   
    System.out.println("All odd numbers from 1 to"+n" are:", n);

      for(i=1; i<=n; i++)
    {
                if(i%2!=0)
        {
            System.out.println(i);
        }
    }
}
