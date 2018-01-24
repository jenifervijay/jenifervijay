 class num 
{

    public static void main(String[] args)
 {

        String string = "78.23";
        boolean n = true;

        try
 {
            Double num1= Double.parseDouble(string);
        }
 catch (NumberFormatException e) 
{
            n = false;
        }

        if(n)
            System.out.println(string + " is a number");
        else
            System.out.println(string + " is not a number");
    }
}
