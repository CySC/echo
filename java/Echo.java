import java.io.*;
public class Echo {
	public static void main(String[] args) {
		while(true) {
			try {
				BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
				String line = in.readLine();
				System.out.println(line);
			} catch (IOException e) {
				e.printStackTrace();
			}
		}
	}
}
