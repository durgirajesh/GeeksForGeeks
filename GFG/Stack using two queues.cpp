void QueueStack :: push(int x)
{
    q1.push(x);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
    if(q1.empty()){
        return -1;
    }
    
    while(q1.size()!=1){
        q2.push(q1.front());
        q1.pop();
    }
    
    int x=q1.front();
    q1.pop();
    queue<int> Q=q1;
    q1=q2;
    q2=Q;
    
    return x;
}