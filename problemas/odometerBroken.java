import java.util.Scanner;

public class odometerBroken {
    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n;
        while ((n = scan.nextInt()) >= 1) {   
            int d = 0;
            int st = 0;
            int ct = 0;
            int et = 0;
            for (int i = 0; i < n; i++) {    
                int s = scan.nextInt();
                et = scan.nextInt();
                ct = et - st;
                st = et;
                d = d + s*ct;
                
            }
        System.out.println(d + " miles");
        }
        
        scan.close();
    }
    
}