import java.util.*;

class polowka {
    public static void main(String[] args) {
        double e, po=-100, k=100, a=7.67, b=5.78, c, s, l, p, x;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Podaj epsilon: ");
        e = scanner.nextDouble();
        s = (po+k)/2;
        l = po;
        p = k;
        while((funkcja(s, a, b))!=0 && Math.abs(po-k)>=e){
            s = polowka(s, l, p, a, b);
            c = (Math.abs(l-p))/4;
            l = s-c;
            p = s+c;
        }
        x = Math.round(s/e)*e;
        System.out.println("Wynik policzony z dokladnoscia: ["+e+"]. Wynosi: "+x);
    }
    public static double funkcja(double s, double a, double b){
        return a*s+b;
    }
    public static double polowka(double s, double l, double p, double a, double b) {
        double po, k;
        if(funkcja(s, a, b)>0){
            po = l;
            k = s;
        }
        else{
            po = s;
            k = p;
        }
        return (po+k)/2;
    }
}
