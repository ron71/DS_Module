
import java.util.Stack;

class CustomQueue{

	Stack<Integer> stack1 = new Stack<Integer>();  //MAIN STACK
	Stack<Integer> stack2 = new Stack<Integer>();

	boolean isEmpty(){
		if(stack2.empty() && stack1.empty()){
			return true;
		}
		else{
			return false;
		}
	}

	int dequeue(){

		Integer n=null;
		if(stack1.empty()){
			System.out.println("\nQueue Error : isEmpty()\n");
			
		}
		else{
			while(!stack1.empty()){
				stack2.push(stack1.pop());
			}

			n  = stack2.pop();

			while(!stack2.empty()){
				stack1.push(stack2.pop());
			}
			System.out.println("Queue OPERATION : dequeue()  = "+n);
			
		}
		return  n.intValue();
	}


	void enqueue(int n){
		stack1.push(n);

		System.out.println("Queue OPERATION : enqueue("+n+")");
	}



public static void main(String[] args) {
	CustomQueue q = new CustomQueue();

	for(int i=0; i<10; i++){
		q.enqueue((int)(Math.random()*100));
	}

	for(int i=0; i<10; i++){
		System.out.println(""+q.dequeue());
	}




}
}