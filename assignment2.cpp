/* #include<iostream>
using namespace std;
int stack[6];
int top=-1;

void push(int a){
if(top==5){
cout<<"Error! Stack OverFlow"<<endl;

}
else{
top++;
stack[top]=a;
cout<<a<<" Inserted"<<endl;
}
}

void pop(){
if(top==-1){
cout<<"Error! Stack UnderFlown"<<endl;
}
else{
cout<<stack[top]<<" deleted"<<endl;
top--;
}
}

void peek(){

if(top==-1){

cout<<"No peek element"<<endl;
}
else{

cout<<"Peek element is:"<< stack[top]<<endl;
}

}

void isEmpty(){
if(top==-1){
cout<<"Stack is Empty"<<endl;

}
else{
cout<<"Stack is not Empty"<<endl;
}
}


void isFull(){
if(top==5){
cout<<"Stack is Full"<<endl;

}
else{
cout<<"Stack is not Full"<<endl;
}
}

void display(){
if(top==-1){
cout<<"Stack is Empty"<<endl;
}

else{
for(int i=0;i<7;i++){
cout<<stack[i]<<" "<<endl;
}
}
}

int main(){

if(top>6){
cout<<"Enter A Valid Number"<<endl;
}
else{
push(10);

push(20);
push(30);
pop();
push(40);

peek();
pop();
pop();

}



return 0;
}
*/


/*#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main() {
    string postfix;

    cout << "Enter postfix expression: ";
    cin >> postfix;

    stack<int> st;

    for (char ch : postfix) {

        
        if (isdigit(ch)) {
            st.push(ch - '0');
        }

        else {
            int b = st.top();
            st.pop();

            int a = st.top();
            st.pop();

            switch (ch) {
                case '+':
                    st.push(a + b);
                    break;

                case '-':
                    st.push(a - b);
                    break;

                case '*':
                    st.push(a * b);
                    break;

                case '/':
                    st.push(a / b);
                    break;

                case '^':
                    st.push(pow(a, b));
                    break;
            }
        }
    }

    cout << "Result = " << st.top() << endl;

    return 0;
} */



/*#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string exp) {
    stack<char> s;

    for (char ch : exp) {

      
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }

       
        else if (ch == ')') {
            if (s.empty() || s.top() != '(')
                return false;
            s.pop();
        }

        else if (ch == '}') {
            if (s.empty() || s.top() != '{')
                return false;
            s.pop();
        }

        else if (ch == ']') {
            if (s.empty() || s.top() != '[')
                return false;
            s.pop();
        }
    }

   
    return s.empty();
}

int main() {
    string exp;

    cout << "Enter expression: ";
    cin >> exp;

    if (isBalanced(exp))
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;

    return 0;
}
    */

    #include <iostream>
#include <stack>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    stack<char> s;

    // Push each character into stack
    for (char ch : str) {
        s.push(ch);
    }

    // Pop characters to get reversed string
    cout << "Reversed string: ";

    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }

    cout << endl;

    return 0;
}
