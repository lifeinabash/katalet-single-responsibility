class Katalet
{
    public static void main (String[] args)
    {
        if ( args.length  == 0 ) {
            System.out.format("Please enter a katalet name.\n");
            System.exit(1);
        }

        String kataName = args[0];
        System.out.format("The katalet you have selected is %s\n", kataName);
        System.exit(0);
    }
}
