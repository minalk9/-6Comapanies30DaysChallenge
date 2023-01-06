class Solution {
public:
int func(int a, int b,string y){
        if(y=="+") return b+a;
        if(y=="-") return b-a;
        if(y=="*") return long(a)*b;
        return b/a;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>temp;
        for(string &x :tokens) {
            if(x=="+" || x == "*" || x == "/" || x == "-") {
                int a = temp.top() ;
                temp.pop();
                int b = temp.top();
                temp.pop();
                temp.push(func(a,b,x));
            }
            
             else{
                temp.push(stoi(x));
            }
        }
        return temp.top();
    }
};