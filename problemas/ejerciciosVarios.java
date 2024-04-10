
import java.util.Scanner;

public class ejercicios {
    public static Scanner scan = new Scanner(System.in);

    public static void leernumeros(){
        double costo;
        while(scan.hasNext()){
            costo = scan.nextDouble();
            System.out.println(costo);
        }
    }

    public static void verificar_picos_escaleras(){
        int cases;
        cases = scan.nextInt();
        while(cases > 0){
            int a, b, c;
            a = scan.nextInt();
            b = scan.nextInt();
            c = scan.nextInt();
            if (a < b && b > c) {
                System.out.println("PEAK\n");
            } else if (a < b && b < c) {
                System.out.println("STAIR\n");
            } else {
                System.out.println("NONE\n");
            }
            cases--;
        }
    }

    public static int collatz_conjecture (long n1, int t){
        if (n1 == 1) {
            return t + 1;
        } else if (n1 % 2 == 0) {
            return collatz_conjecture(n1/2, t+1);
        } else {
            return collatz_conjecture(n1*3 + 1, t+1);
        }
    }
public static void main(String[] args) {
    int n1,n2;
    int t;
    int tm = 0;

    Scanner scan = new Scanner(System.in);
    n1 = scan.nextInt();
    n2 = scan.nextInt();

   while (n1 < n2) {
    t = collatz_conjecture(n1,0);
    n1++;
    if (t > tm) {
        tm = t;
    }
   }

   System.out.println(tm);
}
}
