
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();

        if (a>=90){
            System.out.print("A");
        } else if (a>=80 && a<90) {
            System.out.print("B");
        } else if (a>=70 && a<80) {
            System.out.print("C");
        } else if (a>=60 && a<70) {
            System.out.print("D");
        } else {
            System.out.print("F");
        }

    }
}
