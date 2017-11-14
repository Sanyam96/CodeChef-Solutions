import static java.lang.Math.pow;
import java.util.Scanner;

public class FCTRL{

    public static void main(String[] args) {

        int tc, zeroes, number;
        double power;

        Scanner scn = new Scanner(System.in);
        tc = scn.nextInt();

        for (int i = 0; i < tc; ++i) {
            zeroes = 0;
            power = 1.0;
            number = scn.nextInt();

            while( pow(5.0, power) <= number) {
                zeroes += number/pow(5.0,power);
                power += 1.0;
            }
            System.out.println(zeroes);
            
        }
    }
}
