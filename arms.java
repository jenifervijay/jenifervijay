import java.util.*;
class ArmstrongNumbers 
{

	public static void main(String[] args) 
	{
  scanner s=new Scanner(System.in");
		int num,rem, sum = 0,n;
		System.out.print("Armstrong numbers from 1 to N:");
    n=s.nextInt();
		for (int i = 1; i <= n; i++)
		{
			num = i;
			while (num > 0)
			{
				rem = num % 10;
				sum = sum + (rem*rem*rem);
				num = num / 10;
			}
	 
			if (sum == i)
			{
				System.out.print(i + " ");
			}
			sum = 0;
		}

	}

}
