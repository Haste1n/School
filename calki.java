import java.util.Scanner;

class pole {
    public static void main(String[] args) {
        double n, a, b, pole, suma = 0, srodek, x, ax;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Podaj n: ");
        n = scanner.nextDouble();
        System.out.println("Podaj a: ");
        a = scanner.nextDouble();
        System.out.println("Podaj b: ");
        b = scanner.nextDouble();
        x = (b-a)/n;
        for(int i = 0; i < n; i++){
            srodek = a+(i*x)+(x/2);
            pole = x * (srodek*srodek + srodek + 2);
            suma += pole;
        }
        System.out.println("Pole jest rowne: "+suma);
    }
}
