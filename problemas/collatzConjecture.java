import java.util.Scanner;

public class collatzConjecture {
    //Creacion del arreglo
    public static int[] collatz = new int[10000];

    public static int collatz_conjecture(int n1, int t) {
        if (n1 == 1) {
            return t + 1;
        } else if (n1 % 2 == 0) {
            return collatz_conjecture(n1 / 2, t + 1);
        } else {
            return collatz_conjecture(n1 * 3 + 1, t + 1);
        }
    }
    

    
    public static void llenarArray() {
        for (int i = 0; i < collatz.length; i++) {
            collatz[i] = collatz_conjecture(i + 1, 0);
        } 
    }
    
    public static int retornarMaximo(int n1, int n2){
        int max = 0;
        for (; n1 < n2; n1++) {
            if (collatz[n1] > max) {
                max = collatz[n1];
            }
        }
        return max;
    }


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        llenarArray();
        while (scan.hasNext()) {
            int n1 = scan.nextInt();
            int n2 = scan.nextInt();
            int max = retornarMaximo(n1,n2);
            System.out.println(n1 + " " + n2 + " " + max);
        }
    }
}
