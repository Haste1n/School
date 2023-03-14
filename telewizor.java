import java.util.Scanner;
 
public class Promocja {
 
   public static void main(String[] args) {
 
      Scanner scanner = new Scanner(System.in);
 
      System.out.println("Podaj cene telewizora: ");
      double cena = scanner.nextDouble();
      System.out.println("Podaj rok wprowadzenia do sprzedazy: ");
      int rokWprowadzenia = scanner.nextInt();
      System.out.println("Czy sa inne promocje?: ");
      boolean innePromocje = scanner.nextBoolean();
 
      if (rokWprowadzenia == 2021 && !innePromocje) {
         System.out.println("Podaj wielkosc promocji (w %): ");
         int promocja = scanner.nextInt();
         cena = cena * (100-promocja) / 100;
      }
 
      System.out.println("Cena telewizora: " + cena);
   }
}
