import java.util.Scanner;

class polowka {
    public static void main(String[] args) {
        double e, po=-100, k=100, a=2, b=1, c, s, l, p;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Podaj epsilon: ");
        e = scanner.nextDouble();
        s = (po+k)/2;
        l = po;
        p = k;
        while((a*s+b)!=0 || Math.abs(po-k)>=e){
            s = polowka(s, l, p, a, b);
            c = Math.abs(l-p);
            l = s-c;
            p = s+c;
        }
        System.out.println("Wynik policzony z dokladnoscia: ["+e+"]. Wynosi: "+s);
    }
    public static double polowka(double s, double l, double p, double a, double b) {
        double po, k;
        if(a*s+b>0){
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
