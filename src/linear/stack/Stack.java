package linear.stack;

public class Stack{
	private int size;
	private int []ar;
	private int top=-1;
	Stack(int size){
		this.size = size;
		this.top=-1;
		this.ar = new int[size];
	}
	public void push(int e){
		top++;
		ar[top]=e;
	}
	public int pop() {
		int e = ar[top];
		top--;
		return e;
	}
	boolean isEmplty(){
		return this.top==-1;
	}
	public int peek() {
		return ar[top];
	}
	int getSize() {
		return this.size;
	}
	void print() {
		for(int i =0;i<=top;i++) {
			System.out.print(ar[i]+" ");
		}
		System.out.println(" ");
	}
	
	/*1st argument is the stack to be sorted
	 * 2nd argument is empty stack
	 * */
	
	 void sort(Stack st1, Stack st2) {
		while(!st1.isEmplty()) {
			int e = st1.pop();
			if(st2.isEmplty()) {
				st2.push(e);
			}else if (e<=st2.peek()) {
				st2.push(e);
			}else {
				st1.push(st2.pop());
				st1.push(e);

			}
			
		}
		if(st1.isEmplty()) {
			System.out.println("sorted");
		}
		st2.print();
	}
}
