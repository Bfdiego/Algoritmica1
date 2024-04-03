
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

    public static void (){
        
    }
public static void main(String[] args) {
    
    verificar_picos_escaleras();
    
}
}
