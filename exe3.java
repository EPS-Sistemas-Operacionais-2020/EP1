import java.lang.*;

public class Main {
	public static void main(String[] args) {
		for(int i = 0; i < 5; i++)
			new Thread(threadHello).start();
	}

	private static Runnable threadHello = new Runnable(){
		public void run(){
			System.out.println("hello world");
		}
	};
}