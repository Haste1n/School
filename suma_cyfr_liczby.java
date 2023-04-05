import java.util.Scanner;


class suma_cyfr {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a, i = 0, result = 0;
        System.out.println("Podaj liczbe: ");
        a = scanner.nextInt();
        double s = 0;
        while(Math.pow(10, i)<=a){
            s = a % Math.pow(10, i);
            result += ((a-s) % Math.pow(10, i+1)) / Math.pow(10, i);
            i++;
        }
        System.out.println("Suma cyfr: "+result);
    }
}
