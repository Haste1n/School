import java.util.Scanner;

public class usage {

   public static void main(String[] args) {
       int a, n=5, suma=0;
       Scanner scanner = new Scanner(System.in);
       for(int i = 0; i < n; i++){
            a = scanner.nextInt();
            if(a>0){
                suma += a;
            }
       }
       System.out.println("Suma: "+suma);
   }
}
