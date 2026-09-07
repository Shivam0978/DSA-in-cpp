
                          // 1 (a)
/* #include<bits/stdc++.h>
using namespace std;

int arr[100];
int size;
int front = 0;
int rear = -1;


void enqueue(int a){

    if(rear == size - 1){
        cout << "Queue is Full" << endl;
        return;
    }

    rear++;
    arr[rear] = a;

    cout << a << " is inserted" << endl;
}

void dequeue(){

    if(front > rear){
        cout << "Queue is Empty" << endl;
        return;
    }

    cout << "Deleted element: " << arr[front] << endl;

    front++;
}



void isFull(){

    if(rear == size - 1)
        cout << "Queue is Full" << endl;
    else
        cout << "Queue is not Full" << endl;
}



void isEmpty(){

    if(front > rear)
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;
}



void peek(){

    if(front > rear){
        cout << "Queue is Empty" << endl;
        return;
    }

    cout << "peek element: " << arr[front] << endl;
}



void display(){

    if(front > rear){
        cout << "Queue is Empty" << endl;
        return;
    }

    cout << "Your Queue: ";

    for(int i = front; i <= rear; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}


int main(){

    cout << "Enter size of queue: ";
    cin >> size;

    
    enqueue(40);
    enqueue(56);
    enqueue(45);
    enqueue(12);

    display();
    peek();


    dequeue();

    display();

    isFull();

    isEmpty();

    return 0;
}
    */

                  //1(b)

/*In a linear queue, rear only moves forward. Once rear reaches the last index of the array, the queue is considered full.

The problem is that after performing dequeue(), the spaces before front become empty, but rear cannot move backward to use those spaces.

Therefore, the queue may report Overflow even though there are empty positions in the array.

Suppose the queue has size 5.

Initially:

Index:   0    1    2    3    4
        +----+----+----+----+----+
Queue:  |    |    |    |    |    |
        +----+----+----+----+----+
         F/R

Initially:

front = 0
rear  = -1
Step 1: Enqueue 10, 20, 30, 40, 50
Index:   0    1    2    3    4
        +----+----+----+----+----+
Queue:  | 10 | 20 | 30 | 40 | 50 |
        +----+----+----+----+----+
          ↑                   ↑
        front               rear
          0                   4

Now:

front = 0
rear  = 4

The queue is full.

Step 2: Dequeue twice

Remove 10 and 20.

Index:   0    1    2    3    4
        +----+----+----+----+----+
Queue:  |    |    | 30 | 40 | 50 |
        +----+----+----+----+----+
                   ↑         ↑
                 front      rear
                   2         4

Now:

front = 2
rear  = 4

Notice that index 0 and 1 are empty.

There are actually 2 empty spaces in the array.

Step 3: Try to enqueue 60

You might think:

There are empty spaces → so 60 should fit.

But in a linear queue, the condition is:

if(rear == size - 1)

Here:

rear = 4
size = 5


rear == size - 1
4 == 4

So the queue reports:

Queue Overflow!

even though:

Index:   0    1    2    3    4
        +----+----+----+----+----+
        |    |    | 30 | 40 | 50 |
        +----+----+----+----+----+
          ↑
       empty spaces

This is called false overflow.
*/

                                     // 3

 /*#include<bits/stdc++.h>
using namespace std;

int arr[100];
int size;
int front = 0;
int rear = -1;


void enqueue(int a){

    if(rear == size - 1){
        cout << "Queue is Full" << endl;
        return;
    }

    rear++;
    arr[rear] = a;

    cout << a << " is inserted" << endl;
}

void dequeue(){

    if(front > rear){
        cout << "Queue is Empty" << endl;
        return;
    }

    cout << "Deleted element: " << arr[front] << endl;

    front++;
}

void isFull(){

    if(rear == size - 1)
        cout << "Queue is Full" << endl;
    else
        cout << "Queue is not Full" << endl;
}

void isEmpty(){

    if(front > rear)
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;
}

void peek(){

    if(front > rear){
        cout << "Queue is Empty" << endl;
        return;
    }

    cout << "peek element: " << arr[front] << endl;
}

void display(){

    if(front > rear){
        cout << "Queue is Empty" << endl;
        return;
    }

    cout << "Your Queue: ";

    for(int i = front; i <= rear; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}


int main(){

    cout << "Enter size of queue: ";
    cin >> size;

    
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();

    dequeue();

   
    peek();

    isEmpty();

    isFull();

    display();

    return 0;
} */
    


                     //4

 /* #include<bits/stdc++.h>
using namespace std;

int arr[100];
int size;
int front = 0;
int rear = -1;


void enqueue(int a){

    if(rear == size - 1){
        cout << "Queue is Full" << endl;
        return;
    }

    rear++;
    arr[rear] = a;

    cout << a << " is inserted" << endl;
}


void dequeue(){

    if(front > rear){
        cout << "Queue is Empty" << endl;
        return;
    }

    cout << "Deleted element: " << arr[front] << endl;

    front++;
}

void isFull(){

    if(rear == size - 1)
        cout << "Queue is Full" << endl;
    else
        cout << "Queue is not Full" << endl;
}

void isEmpty(){

    if(front > rear)
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;
}

void peek(){

    if(front > rear){
        cout << "Queue is Empty" << endl;
        return;
    }

    cout << "peek element: " << arr[front] << endl;
}

void display(){

    if(front > rear){
        cout << "Queue is Empty" << endl;
        return;
    }

    cout << "Your Queue: ";

    for(int i = front; i <= rear; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}


int main(){

    cout << "Enter size of queue: ";
    cin >> size;

    
    enqueue(5);
    enqueue(10);
    enqueue(15);
    enqueue(20);
    enqueue(25);

    enqueue(30);

    dequeue();
    dequeue();

    display();
   
    peek();

    isEmpty();

    isFull();

    display();

    return 0;
}
    */


                      //4 [a]

/* #include<bits/stdc++.h>
using namespace std;

int q[100];
int front = -1;
int rear = -1;
int size;


void enqueue(int value){

    if(rear == size - 1){
        cout << "Queue is Full" << endl;
        return;
    }

    if(front == -1)
        front = 0;

    rear++;
    q[rear] = value;

    cout<<value<<" inserted"<<endl;
}


int dequeue(){

    if(front == -1 || front > rear){
        cout << "Queue is Empty" << endl;
        return -1;
    }

    int value = q[front];
    front++;

    if(front > rear){
        front = -1;
        rear = -1;
    }

    return value;
}


void push(int value){

    enqueue(value);

    int n = rear - front;

    for(int i = 0; i < n; i++){
        int temp = dequeue();
        rear++;
        q[rear]=temp;
    }
   
}

void pop(){

    if(front == -1){
        cout << "Stack is Empty" << endl;
        return;
    }

    cout << "Popped element: " << dequeue() << endl;
}


void display(){

    if(front == -1){
        cout << "Stack is Empty" << endl;
        return;
    }

    cout << "Stack: ";

    for(int i = front; i <= rear; i++){
        cout << q[i] << " ";
    }

    cout << endl;
}


int main(){

    cout << "Enter size of Stack: ";
    cin >> size;

   
    push(10);
    push(20);
    push(30);
    push(40);
    

    display();

    pop();

    display();

    return 0;
}
*/


               // 4(b)

 #include<bits/stdc++.h>
using namespace std;

int s1[100], s2[100];
int top1 = -1, top2 = -1;
int size;



void push1(int value){

    if(top1 == size - 1){
        cout << "Queue is Full" << endl;
        return;
    }

    top1++;
    s1[top1] = value;
}

int pop1(){

    if(top1 == -1)
        return -1;

    int value = s1[top1];
    top1--;

    return value;
}

void push2(int value){

    top2++;
    s2[top2] = value;
}

int pop2(){

    if(top2 == -1)
        return -1;

    int value = s2[top2];
    top2--;

    return value;
}

void enqueue(int value){

    push1(value);

    cout << value << " inserted into queue" << endl;
}

void dequeue(){

    if(top1 == -1){
        cout << "Queue is Empty" << endl;
        return;
    }

    
    while(top1 != -1){
        push2(pop1());
    }


    int value = pop2();

   
    while(top2 != -1){
        push1(pop2());
    }

    cout << "Deleted element: " << value << endl;
}



void display(){

    if(top1 == -1){
        cout << "Queue is Empty" << endl;
        return;
    }

    cout << "Queue: ";

    for(int i = 0; i <= top1; i++){
        cout << s1[i] << " ";
    }

    cout << endl;
}


int main(){

    cout << "Enter size of queue: ";
    cin >> size;

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();

    dequeue();

    display();

    return 0;
} 