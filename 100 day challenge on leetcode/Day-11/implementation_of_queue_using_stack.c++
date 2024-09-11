class MyQueue {
    private final Stack<Integer> inputstack;
    private final Stack<Integer> outputstack;
    public MyQueue() {
            inputstack = new Stack<>();
            outputstack = new Stack<>();
    }
    
    public void push(int x) {
        inputstack.push(x);
    }
    
    public int pop() {
        peek();
        return outputstack.pop();
    }
    
    public int peek() {
        if (outputstack.empty())
            while (!inputstack.empty())
                outputstack.push(inputstack.pop());
        return outputstack.peek();
    }
    
    public boolean empty() {
        return inputstack.empty() && outputstack.empty();
    }
}