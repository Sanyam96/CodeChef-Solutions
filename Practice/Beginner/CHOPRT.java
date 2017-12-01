import java.util.*;

public class CHOPRT{

	public static void main(String[] args) {

		int tc;
		Scanner scn = new Scanner(System.in);
		tc = scn.nextInt();
		
		for(int i = tc; i >= 1; i--) {

			int no1;
			no1 = scn.nextInt();
			int no2;
			no2 = scn.nextInt();

			if(no1 > no2) {
				System.out.println(">");
			}
			else if(no1 < no2) {
				System.out.println("<");
			}
			else {
				System.out.println("=");
			}
		}
	}

}