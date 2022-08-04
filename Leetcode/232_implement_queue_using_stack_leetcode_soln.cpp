/*
Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).
Implement the MyQueue class:
 - void push(int x) Pushes element x to the back of the queue.
 - int pop() Removes the element from the front of the queue and returns it.
 - int peek() Returns the element at the front of the queue.
 - boolean empty() Returns true if the queue is empty, false otherwise.
*/

class MyQueue {
    stack<int> input;
    stack<int> output;
    
    void transfer(){
        while(!input.empty()){
            output.push(input.top());
            input.pop();
        }
    }
    
public:
      
    MyQueue() {
        while(!input.empty()) input.pop();
        while(!output.empty()) output.pop();
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(output.empty()) transfer();
        int temp = output.empty() ? -1 : output.top();
        if(temp!=-1) output.pop();
        return temp;
        
    }
    
    int peek() {
        if(output.empty()) transfer();
        int temp = output.empty() ? -1 : output.top();
        return temp;   
    }
    
    bool empty() {
        if(input.empty() && output.empty()) return true;
        else return false; 
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

/*
SAMPLE INPUT : 
["MyQueue","push","push","peek","pop","empty"]
[[],[1],[2],[],[],[]]
SAMPLE OUTPUT : 
[null,null,null,1,1,false]
*/
