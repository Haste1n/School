class polowienie {
    public static void main(String[] args) {
        int a = 74852, i = 0, result = 0; 
        double s = 0;
        while(Math.pow(10, i)<=a){
            s = a % Math.pow(10, i);
            result += ((a-s) % Math.pow(10, i+1)) / Math.pow(10, i);
            i++;
        }
        System.out.println(result);
    }
}
