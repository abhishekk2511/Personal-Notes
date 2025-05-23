    #include<iostream>
    #include<deque>

    using namespace std;

    template <typename T>
    class stack{
        deque<T> d;

    public : 

        void push(T val){
            d.push_back(val);
        }

        void pop(){ 
            if(empty()){
                return;
            }
            d.pop_back();
        }

        int size(){
            return  d.size();
        }

        int top(){
            return d.back();
        }

        bool empty(){
            return d.empty();
        }
    };
    int main()
    {
        stack <int> s;

        cout << "Size : " << s.size()<<endl;
        cout << "isEmpty ? : "<< s.empty() << endl;

        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);

        
        cout << "Size : " << s.size()<<endl;
        cout << "Top Element : " << s.top() << endl;
        cout << "isEmpty ? : "<< s.empty() << endl;

        s.pop();
        cout << "Size : " << s.size()<<endl;
        cout << "top : "<< s.top() << endl;
        
        s.pop();
        cout << "Size : " << s.size()<<endl;
        cout << "top : "<< s.top() << endl;
        
        s.pop();
        cout << "Size : " << s.size()<<endl;
        cout << "top : "<< s.top() << endl;
        
        s.pop();
        cout << "Size : " << s.size()<<endl;
        cout << "top : "<< s.top() << endl;
        
        s.pop();
        cout << "Size : " << s.size()<<endl;
        cout << "isEmpty ? : "<< s.empty() << endl;

    return 0;
    }