package linear.stack;

import java.util.Random;

public class Main {

	public static void main(String[] args) {
		Stack stack = new Stack(100);
		Random r = new Random();
		for(int i =1;i<=100;i++) {
			stack.push(r.nextInt(100));
		}
		stack.print();
		stack.sort(stack, new Stack(stack.getSize()));
	}

}
