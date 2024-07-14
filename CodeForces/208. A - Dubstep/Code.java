import java.util.Scanner;
import java.lang.String;

public class Code {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s = in.next();

		String[] arr = s.split("WUB");

		String result = "";
		for (int i = 0; i < arr.length; i++) {
			if (arr[i].length() > 0) {
				result += arr[i] + " ";
			}
		}

		System.out.print(result.trim());
	}
}