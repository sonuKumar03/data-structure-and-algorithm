package linear.list;

class Node{
	int data;
	Node next;
	Node(){
		next = null;
	}
	Node(int e){
		this.data =e;
		next = null;
	}
}

public class LinkedList {
	Node head=null;
	Node tail=null;
	void add(int e) {
		if(head==null) {
			head = new Node(e);
			tail = head;
		}else {
			tail.next = new Node(e);
			tail = tail.next;
		}
	}
	@Override
	public String toString() {
		String str = "";
		Node cur = head;
		while(cur!=null) {
			str+=""+cur.data+" ";
			cur = cur.next;
		}
		return str;
	}
}
