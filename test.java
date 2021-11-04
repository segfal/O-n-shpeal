

//Hello World app
public class test {


    //Constant method
    void constant() {
        final int x = 5;
    }

    //linear method
    void linear(int n)
    {
        int i;
        for (i = 0; i < n; i++)
        {
            continue;
        }

        
    }
    //quadratic method
    void quadratic(int n)
    {
        int i;
        for (i = 0; i < n; i++)
        {
            if (i == 0)
            {
                continue;
            }
        }
    }

    //logarithmic method
    void logarithmic(int n)
    {
        int i;
        for (i = 0; i < n; i/=2)
        {
            continue;
        }
        
        
    }
    void code()
    {
        constant();
        linear(5);
        quadratic(5);
        logarithmic(5);
    }

    public static void main(String[] args) {
        System.out.println("Hello World");
    }
}
