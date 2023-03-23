import java.util.*;

class kwadratowa {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double a=1, b=-2, c=-8, n, x1, x2, s, suma=0, pole, x, y;
        System.out.println("Podaj n: ");
        n = scanner.nextDouble();
        x1 = (-b-(Math.sqrt(b*b-4*a*c)))/(2*a);
        x2 = (-b+(Math.sqrt(b*b-4*a*c)))/(2*a);
        x = Math.abs(x1-x2)/n;
        s = x1+x/2;
        for(int i = 0; i < n; i++){
            y = a * s * s + b * s + c;
            pole = Math.abs(x * y);
            suma += pole;
            s += x;
        }
    System.out.println("Pole to: " + Math.round(suma * 100000)/100000.0);
    }
}
