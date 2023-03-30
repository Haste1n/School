import java.util.Scanner;

class whateva {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n;
        int[] tab;
        System.out.println("Podaj dlugosc tablicy: ");
        n = scanner.nextInt();
        tab = new int[n];
        for(int i = 0; i < n; i++){
            System.out.println("Podaj "+(i+1)+" element: ");
            tab[i] = scanner.nextInt();
        }
        for(int i = 0; i < n; i++){
            if(tab[i]==0){
                System.out.println(i+", ");
            }
        }
    }
}
