class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>stk;
        for(string ch : operations){
            if(ch=="D" && !stk.empty()){
                int temp=stk.top();
                temp=temp*2;
                stk.push(temp);
            }
            else if(ch=="C" && !stk.empty()){
                stk.pop();
            }
            else if(ch=="+" && stk.size()>=2){
                int temp=stk.top();
                stk.pop();
                int semp=stk.top();
                stk.pop();
                stk.push(semp);
                stk.push(temp);
                stk.push(semp+temp);
            }
            else{
                stk.push(stoi(ch));
            }
        }
        int sum=0;
        while(!stk.empty()){
            sum+=stk.top();
            stk.pop();
        }
        return sum;
    }
};