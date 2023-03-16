import java.util.Scanner;

class HelloWorld {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        float a, b;
        int i = -1;
        do{
            System.out.println("Podaj a: ");
            a=scanner.nextInt();
            System.out.println("Podaj b: ");
            b=scanner.nextInt();
            i++;
            if(b==0){
                System.out.println("Nie dziel przez zero.");
                break;
            }
            System.out.println("a/b="+(a/b));
        }while(0==0);
        System.out.println("Ilosc dzialan: "+i);
    }
}
