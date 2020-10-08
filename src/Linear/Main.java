package Linear;

public class Main {

	public static void main(String[] args) {
		Stack stack = new Stack(10);
		stack.push(10);
		stack.push(4);
		stack.push(6);
		stack.push(9);
		stack.push(91);
		stack.push(19);
//		stack.print();
		stack.sort(stack, new Stack(stack.getSize()));
	}

}
