package capitulos.estructuras_de_datos;

public class fuerzaBruta {

    public static boolean isPrime(int n){
        int numeroDivisores = 0;
        for (int i = 0; i < n; i++) {
            if (n%i == 0) {
                numeroDivisores++;
            }
        }
        
        return numeroDivisores == 2;
    }
    

    public static boolean isPrimeEnhanced (int n){
        if (n == 2) {
            return true;
        } else if (n%2 == 0 || n <= 1) {
            return false;
        }

        for (int i = 3; i*i <= n; i+=2) {
            if (n%i == 0) {
                return false;
            }
        }
        return true;
    }
}