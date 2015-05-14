public class Katalet
{
    public static int Main (string[] args)
    {
        if( args.Length == 0) {
            System.Console.WriteLine("Please enter a katalet name.");
            return 1;
        }

        string kataName = args[0];
        System.Console.WriteLine("The katalet you have selected is {0}", kataName);
        return 0;
    }
}
